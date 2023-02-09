#pragma once
#include "Server.h"
#include <minecpp/game/player/Id.h>
#include <minecpp/nbt/repository/v1/Codec.nbt.h>
#include <minecpp/proto/event/clientbound/v1/Clientbound.pb.h>
#include <minecpp/service/engine/Api.h>
#include <string>
#include <vector>

namespace minecpp::service::front {

namespace clientbound_v1 = proto::event::clientbound::v1;

class EventHandler
{
   Server &m_server;
   engine::IStream *m_stream = nullptr;
   nbt::repository::v1::Registry &m_registry;
   std::unique_ptr<std::future<bool>> m_player_list{};

 public:
   explicit EventHandler(Server &server, nbt::repository::v1::Registry &registry);

   constexpr void set_stream(engine::IStream *stream)
   {
      m_stream = stream;
   }

   void handle_add_player(const clientbound_v1::AddPlayer &msg,
                          const std::vector<game::player::Id> &player_ids);
   void handle_spawn_player(const clientbound_v1::SpawnPlayer &pos,
                            const std::vector<game::player::Id> &player_ids);
   void handle_entity_move(const clientbound_v1::EntityMove &pos,
                           const std::vector<game::player::Id> &player_ids);
   void handle_entity_look(const clientbound_v1::EntityLook &pos,
                           const std::vector<game::player::Id> &player_ids);
   void handle_chat(const clientbound_v1::Chat &chat_msg, const std::vector<game::player::Id> &player_ids);
   void handle_remove_player(const clientbound_v1::RemovePlayer &msg,
                             const std::vector<game::player::Id> &player_ids);
   void handle_update_block(const clientbound_v1::UpdateBlock &msg,
                            const std::vector<game::player::Id> &player_ids);
   void handle_animate_hand(const clientbound_v1::AnimateHand &msg,
                            const std::vector<game::player::Id> &player_ids);
   void handle_acknowledge_block_change(const clientbound_v1::AcknowledgeBlockChange &msg,
                                        const std::vector<game::player::Id> &player_ids);
   void handle_load_terrain(const clientbound_v1::LoadTerrain &msg,
                            const std::vector<game::player::Id> &player_ids);
   void handle_transfer_player(const clientbound_v1::TransferPlayer &msg,
                               const std::vector<game::player::Id> &player_ids);
   void handle_update_player_abilities(const clientbound_v1::UpdatePlayerAbilities &msg,
                                       const std::vector<game::player::Id> &player_ids);
   void handle_unload_chunk(const clientbound_v1::UnloadChunk &msg,
                            const std::vector<game::player::Id> &player_ids);
   void handle_accept_player(const clientbound_v1::AcceptPlayer &msg,
                             const std::vector<game::player::Id> &player_ids);
   void handle_deny_player(const clientbound_v1::DenyPlayer &msg,
                           const std::vector<game::player::Id> &player_ids);
   void handle_player_list(const clientbound_v1::PlayerList &msg,
                           const std::vector<game::player::Id> &player_ids);
   void handle_entity_list(const clientbound_v1::EntityList &msg,
                           const std::vector<game::player::Id> &player_ids);
   void handle_set_inventory_slot(const clientbound_v1::SetInventorySlot &msg,
                                  const std::vector<game::player::Id> &player_ids);
   void handle_update_block_light(const clientbound_v1::UpdateBlockLight &msg,
                                  const std::vector<game::player::Id> &player_ids);
   void handle_chunk_data(const clientbound_v1::ChunkData &msg,
                          const std::vector<game::player::Id> &player_ids);
   void handle_set_center_chunk(const clientbound_v1::SetCenterChunk &msg,
                                const std::vector<game::player::Id> &player_ids);
   void handle_player_position_rotation(const clientbound_v1::PlayerPositionRotation &msg,
                                        const std::vector<game::player::Id> &player_ids);
   void handle_set_spawn_position(const clientbound_v1::SetSpawnPosition &msg,
                                  const std::vector<game::player::Id> &player_ids);
   void handle_set_entity_equipment(const clientbound_v1::SetEntityEquipment &msg,
                                    const std::vector<game::player::Id> &player_ids);

   template<typename T>
   void send_message_to_all_players(const T &msg)
   {
      for (auto &[_, conn] : m_server) {
         if (conn.get() == nullptr)
            continue;
         send(conn, msg);
      }
   }

   template<typename T>
   void send_message(const T &msg, const std::vector<game::player::Id> &player_ids)
   {
      if (player_ids.empty()) {
         send_message_to_all_players(msg);
         return;
      }

      for (const auto &id : player_ids) {
         auto conn = m_server.connection_by_player_id(id);
         send(conn, msg);
      }
   }

   template<typename T>
   void send_message_excluding(const T &msg, game::PlayerId excluded)
   {
      for (auto &[_, conn] : m_server) {
         if (conn.get() == nullptr)
            continue;
         if (conn->uuid() == excluded)
            continue;
         send(conn, msg);
      }
   }
};

}// namespace minecpp::service::front
