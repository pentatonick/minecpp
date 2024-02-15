#include "ApiHandler.h"
#include "ChunkSystem.h"
#include "Dispatcher.h"
#include "EventManager.h"
#include "JobSystem.h"
#include "PlayerManager.h"
#include "Service.h"
#include "service/PlayerInteraction.h"
#include "service/PlayerInterface.h"
#include "service/PlayerMovement.h"
#include "service/PlayerSession.h"
#include "StorageResponseHandler.h"
#include "TickSystem.h"
#include "World.h"

#include "minecpp/controller/RootItem.h"
#include "minecpp/debug/TraceManager.h"
#include "minecpp/entity/EntitySystem.h"
#include "minecpp/repository/Repository.h"
#include "minecpp/service/storage/Storage.h"
#include "minecpp/world/population/Object.h"

#include <mb/core.h>
#include <spdlog/spdlog.h>
#include <yaml-cpp/yaml.h>

struct Configuration
{
   std::string server_bind_address{};
   std::uint16_t server_bind_port{};
   std::vector<std::string> storage_endpoints{};
   std::string resources_data_file{};
   std::string resources_registry{};
   std::uint64_t gameplay_world_seed{};
   int gameplay_max_players{};
   int gameplay_spawn_point_x{};
   int gameplay_spawn_point_y{};
   int gameplay_spawn_point_z{};
   bool debug_logger{};
   int worker_count{};

   void read_from_yaml_file(const std::string &file_name)
   {
      auto yaml_cfg             = YAML::LoadFile(file_name);
      this->server_bind_address = yaml_cfg["server"]["bind_address"].as<std::string>("0.0.0.0");
      this->server_bind_port    = yaml_cfg["server"]["bind_port"].as<std::uint16_t>(8000);
      this->storage_endpoints   = yaml_cfg["storage"]["endpoints"].as<std::vector<std::string>>(
              std::vector<std::string>{"127.0.0.1:8080"});
      this->resources_data_file    = yaml_cfg["resources"]["data_file"].as<std::string>("repository.bin");
      this->resources_registry     = yaml_cfg["resources"]["registry_file"].as<std::string>("registry.bin");
      this->gameplay_world_seed    = yaml_cfg["gameplay"]["world_seed"].as<unsigned long long>(0ULL);
      this->gameplay_max_players   = yaml_cfg["gameplay"]["max_players"].as<int>(10);
      this->gameplay_spawn_point_x = yaml_cfg["gameplay"]["spawn_point"]["x"].as<int>(0);
      this->gameplay_spawn_point_y = yaml_cfg["gameplay"]["spawn_point"]["y"].as<int>(80);
      this->gameplay_spawn_point_z = yaml_cfg["gameplay"]["spawn_point"]["z"].as<int>(0);
      this->debug_logger           = yaml_cfg["debug_logger"].as<bool>(false);
      this->worker_count           = yaml_cfg["worker_count"].as<int>(8);
   }
};

auto main() -> int
{
   using namespace minecpp::service::engine;

   Configuration config;

   auto config_path = mb::getenv("CONFIG_FILE").unwrap("minecpp.yaml");
   config.read_from_yaml_file(config_path);

   if (config.debug_logger) {
      spdlog::set_level(spdlog::level::debug);
   }

   minecpp::debug::TraceManager::the().initialize();

   auto load_repo_res = minecpp::repository::load_repository_from_file(config.resources_data_file);
   if (!load_repo_res.ok()) {
      spdlog::error("could not init repository: {}", load_repo_res.err()->msg());
      return 1;
   }

   minecpp::world::population::ObjectRepository::the().register_objects();

   auto registry = minecpp::repository::load_network_registry_from_file(config.resources_registry).unwrap({});

   JobSystem job_system{static_cast<std::size_t>(config.worker_count)};

   StorageResponseHandler storage_handler{job_system};
   minecpp::service::storage::StorageClient storage_client(0, storage_handler);

   ChunkSystem chunk_system(job_system, storage_client, config.gameplay_world_seed);
   storage_handler.set_chunk_system(&chunk_system);

   minecpp::entity::EntitySystem entity_system(chunk_system);
   PlayerManager player_manager(entity_system, {config.gameplay_spawn_point_x, config.gameplay_spawn_point_y,
                                                config.gameplay_spawn_point_z});

   EventManager manager;
   Dispatcher dispatcher(manager, chunk_system, entity_system, registry);
   minecpp::controller::BlockManager block_manager;
   minecpp::controller::RootItem root_item_controller;

   World world(chunk_system, job_system, dispatcher, player_manager, entity_system, block_manager);

   service::PlayerInteraction player_interaction_service(world, dispatcher, block_manager,
                                                         root_item_controller);
   service::PlayerInterface player_interface_service(player_manager, world, dispatcher);
   service::PlayerMovement player_movement_service(player_manager, world, dispatcher);
   service::PlayerSession player_session_service(player_manager, world, dispatcher);

   Service service(player_interaction_service, player_interface_service, player_movement_service,
                   player_session_service);

   ApiHandler api_handler(service, manager, job_system, config.server_bind_port);
   api_handler.tick();

   for (auto endpoint_str : config.storage_endpoints) {
      auto endpoint = minecpp::network::Endpoint::from_host(endpoint_str);
      if (endpoint.has_failed()) {
         spdlog::error("cannot resolve endpoint {}", endpoint_str);
         return 1;
      }
      storage_client.connect(*endpoint);
   }

   TickSystem tick_system(world, api_handler, storage_client);

   spdlog::info("starting server on address {}:{}", config.server_bind_address, config.server_bind_port);
   tick_system.loop();
}