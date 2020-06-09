#pragma once
#include "config.h"
#include "connection.h"
#include "players.h"
#include <boost/random.hpp>
#include <grpcpp/channel.h>
#include <grpcpp/client_context.h>
#include <minepb/chunk.pb.h>
#include <minepb/chunk_storage.grpc.pb.h>
#include <minepb/engine.grpc.pb.h>
#include <minepb/engine.pb.h>

namespace Front {

typedef std::shared_ptr<minecpp::engine::PlayerService::Stub>
    EnginePlayerService;
typedef std::shared_ptr<grpc::Channel> EngineChannel;
typedef std::shared_ptr<minecpp::chunk_storage::ChunkStorage::Stub>
    ChunkService;

class Service {
 public:
   explicit Service(Config &conf);
   ~Service();

   struct LoginResponse {
      bool accepted;
      std::string_view refusal_reason;
      std::string_view user_name;
      boost::uuids::uuid uuid;
   };
   LoginResponse login_player(std::string &user_name);

   void init_player(Connection &conn, boost::uuids::uuid id);
   EnginePlayerService &get_player_service();

 private:
   PlayerManager players;
   std::vector<EnginePlayerService> player_services;
   ChunkService chunk_service;
   boost::random::mt19937 rand;
   char *cached_recipes = nullptr;
   size_t cached_recipes_size;
   char *cached_tags = nullptr;
   size_t cached_tags_size;

   void load_chunk(Connection &conn, int x, int z);
};

} // namespace Front
