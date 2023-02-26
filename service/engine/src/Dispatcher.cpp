#include "Dispatcher.h"
#include "EventManager.h"
#include <minecpp/chat/Chat.h>
#include <minecpp/entity/component/Abilities.h>
#include <minecpp/entity/component/Location.h>
#include <minecpp/entity/component/Player.h>
#include <minecpp/entity/EntitySystem.h>
#include <minecpp/game/player/Player.h>
#include <minecpp/proto/event/clientbound/v1/Clientbound.pb.h>
#include <minecpp/util/Uuid.h>
#include <minecpp/world/SectionSlice.h>

namespace minecpp::service::engine {

namespace clientbound_v1 = proto::event::clientbound::v1;

Dispatcher::Dispatcher(EventManager &events, entity::EntitySystem &entity_system) :
    m_events(events),
    m_entity_system(entity_system)
{
}

void Dispatcher::load_terrain(game::PlayerId player_id, const game::ChunkPosition &central_chunk,
                              std::vector<minecpp::game::ChunkPosition> coords)
{
   clientbound_v1::LoadTerrain event;
   *event.mutable_central_chunk() = central_chunk.to_proto();
   for (const auto &c : coords) {
      *event.add_coords() = c.to_proto();
   }

   m_events.send_to(event, player_id);
}

void Dispatcher::transfer_player(game::PlayerId player_id, boost::uuids::uuid /*target_engine*/)
{
   clientbound_v1::TransferPlayer event;
   event.set_engine_instance_id(0);// TODO: Set engine id

   m_events.send_to(event, player_id);
}

void Dispatcher::player_move(game::PlayerId player_id, game::EntityId entity_id,
                             const math::Vector3 &position, const math::Vector3s &movement,
                             const game::Rotation &rotation)
{
   clientbound_v1::EntityMove event;
   event.set_entity_id(entity_id);
   *event.mutable_player_id() = game::player::write_id_to_proto(player_id);
   *event.mutable_movement()  = movement.to_proto();
   *event.mutable_rotation()  = rotation.to_proto();

   this->send_to_players_in_view_distance_except(player_id, position, event);
}

void Dispatcher::entity_move(game::EntityId entity_id, const math::Vector3 &position,
                             const math::Vector3s &movement, const game::Rotation &rotation)
{
   clientbound_v1::EntityMove event;
   event.set_entity_id(entity_id);
   *event.mutable_movement() = movement.to_proto();
   *event.mutable_rotation() = rotation.to_proto();

   this->send_to_players_in_view_distance(position, event);
}

void Dispatcher::add_player(game::PlayerId player_id, const std::string &name, mb::u32 ping)
{
   clientbound_v1::AddPlayer add_player;
   *add_player.mutable_player_id() = game::player::write_id_to_proto(player_id);
   add_player.set_name(name);
   add_player.set_ping(ping);

   m_events.send_to_all(add_player);
}

void Dispatcher::spawn_player(game::PlayerId player_id, game::EntityId entity_id,
                              const math::Vector3 &position)
{
   auto entity = m_entity_system.entity(entity_id);

   clientbound_v1::SpawnPlayer spawn_player;
   *spawn_player.mutable_player_id() = game::player::write_id_to_proto(player_id);
   entity.serialize_player_to_proto(spawn_player.mutable_entity());

   this->send_to_players_in_view_distance_except(player_id, position, spawn_player);
}

void Dispatcher::send_chat(chat::MessageType msg_type, const std::string &msg)
{
   clientbound_v1::Chat chat;
   chat.set_type(static_cast<google::protobuf::int32>(msg_type));
   chat.set_message(msg);

   m_events.send_to_all(chat);
}

void Dispatcher::send_direct_chat(game::PlayerId player_id, chat::MessageType msg_type,
                                  const std::string &msg)
{
   clientbound_v1::Chat chat;
   chat.set_type(static_cast<google::protobuf::int32>(msg_type));
   chat.set_message(msg);

   m_events.send_to(chat, player_id);
}

void Dispatcher::player_look(game::PlayerId player_id, game::EntityId entity_id,
                             const math::Vector3 &position, const game::Rotation &rotation)
{
   clientbound_v1::EntityLook event;
   *event.mutable_player_id() = game::player::write_id_to_proto(player_id);
   event.set_entity_id(entity_id);
   *event.mutable_rotation() = rotation.to_proto();

   this->send_to_players_in_view_distance_except(player_id, position, event);
}

void Dispatcher::entity_look(game::EntityId entity_id, const math::Vector3 &position,
                             const game::Rotation &rotation)
{
   clientbound_v1::EntityLook event;
   event.set_entity_id(entity_id);
   *event.mutable_rotation() = rotation.to_proto();

   this->send_to_players_in_view_distance(position, event);
}

void Dispatcher::remove_player(game::PlayerId player_id, mb::u32 entity_id)
{
   clientbound_v1::RemovePlayer remove_player;
   *remove_player.mutable_player_id() = game::player::write_id_to_proto(player_id);
   remove_player.set_entity_id(entity_id);

   m_events.send_to_all(remove_player);
}

void Dispatcher::update_block(minecpp::game::BlockPosition block, game::BlockStateId state)
{
   clientbound_v1::UpdateBlock update_block;
   update_block.set_block_position(block.as_long());
   update_block.set_state(state);

   this->send_to_players_in_view_distance(block.to_vec3(), update_block);
}

void Dispatcher::animate_entity(game::EntityId entity_id, const math::Vector3 &position,
                                game::EntityAnimation animation)
{
   clientbound_v1::AnimateEntity animate;
   animate.set_entity_id(entity_id);
   animate.set_animation(animation.to_proto());

   this->send_to_players_in_view_distance(position, animate);
}

void Dispatcher::animate_player_entity(game::PlayerId player_id, game::EntityId entity_id,
                                       const math::Vector3 &position, game::EntityAnimation animation)
{
   clientbound_v1::AnimateEntity animate;
   animate.set_entity_id(entity_id);
   animate.set_animation(animation.to_proto());

   this->send_to_players_in_view_distance_except(player_id, position, animate);
}

void Dispatcher::acknowledge_block_change(game::PlayerId player_id, int sequence_id)
{
   clientbound_v1::AcknowledgeBlockChange digging;
   digging.set_sequence_id(sequence_id);

   m_events.send_to(digging, player_id);
}

void Dispatcher::unload_chunk(game::PlayerId player_id, const game::ChunkPosition &chunk_position)
{
   clientbound_v1::UnloadChunk unload;
   *unload.mutable_player_id()      = game::player::write_id_to_proto(player_id);
   *unload.mutable_chunk_position() = chunk_position.to_proto();

   m_events.send_to(unload, player_id);
}

void Dispatcher::accept_player(const game::player::Player &player)
{
   clientbound_v1::AcceptPlayer accept_player;
   accept_player.mutable_gameplay()->set_view_distance(32);
   *accept_player.mutable_player() = player.to_proto();

   auto entity = m_entity_system.entity(player.entity_id());
   // It's assumed entity has abilities component
   auto abilities                     = entity.component<entity::component::Abilities>();
   *accept_player.mutable_abilities() = abilities.abilities.to_proto();

   m_events.send_to(accept_player, player.id());
}

void Dispatcher::deny_player(const game::PlayerId &player_id, const std::string &reason)
{
   clientbound_v1::DenyPlayer deny_player;
   deny_player.set_denial_reason(reason);

   m_events.send_to(deny_player, player_id);
}

void Dispatcher::player_list(game::PlayerId player_id, const std::vector<game::player::Status> &status_list)
{
   clientbound_v1::PlayerList player_list;
   player_list.mutable_list()->Reserve(static_cast<int>(status_list.size()));
   for (const auto &status : status_list) {
      *player_list.add_list() = status.to_proto();
   }

   m_events.send_to(player_list, player_id);
}

void Dispatcher::entity_list(game::PlayerId player_id, const std::span<game::EntityId> entities)
{
   clientbound_v1::EntityList list;

   list.mutable_player_entities()->Reserve(static_cast<int>(entities.size()));
   list.mutable_entities()->Reserve(static_cast<int>(entities.size()));

   for (const auto &entity_id : entities) {
      auto entity = m_entity_system.entity(entity_id);
      if (entity.has_component<entity::component::Player>()) {
         if (entity.component<entity::component::Player>().id() == player_id)
            continue;

         entity.serialize_player_to_proto(list.add_player_entities());
      } else {
         entity.serialize_to_proto(list.add_entities());
      }
   }

   m_events.send_to(list, player_id);
}

void Dispatcher::set_inventory_slot(game::PlayerId player_id, game::ItemId item_id, game::SlotId slot_id,
                                    int count)
{
   clientbound_v1::SetInventorySlot set_slot;
   set_slot.mutable_slot()->set_slot_id(slot_id);
   set_slot.mutable_slot()->set_count(static_cast<uint32_t>(count));
   set_slot.mutable_slot()->mutable_item_id()->set_id(static_cast<uint32_t>(item_id));

   m_events.send_to(set_slot, player_id);
}

void Dispatcher::update_block_light(game::ISectionSlice &slice, game::SectionRange range)
{
   auto *section_slice = dynamic_cast<world::SectionSlice *>(&slice);
   if (section_slice == nullptr)
      return;

   proto::event::clientbound::v1::UpdateBlockLight update_block_light;
   std::map<mb::u64, int> id_mapping;

   for (auto section : range) {
      int id;
      if (id_mapping.contains(section.chunk_position().hash())) {
         id = id_mapping[section.chunk_position().hash()];
      } else {
         id                                          = update_block_light.block_light_size();
         id_mapping[section.chunk_position().hash()] = id;

         proto::event::clientbound::v1::ChunkBlockLight chunk_block_light;
         *chunk_block_light.mutable_position() = section.chunk_position().to_proto();

         update_block_light.mutable_block_light()->Add(std::move(chunk_block_light));
      }

      auto *chunk         = update_block_light.mutable_block_light(id);
      auto *chunk_section = dynamic_cast<world::Section *>(&section_slice->operator[](section));
      if (chunk_section == nullptr)
         continue;

      proto::event::clientbound::v1::SectionBlockLight section_block_light;
      section_block_light.set_y(section.y());
      section_block_light.mutable_block_light()->resize(world::LightContainer::raw_size);

      auto light = chunk_section->light_data(game::LightType::Block);
      if (light != nullptr)
         std::copy(light->raw().begin(), light->raw().end(),
                   section_block_light.mutable_block_light()->begin());

      chunk->mutable_sections()->Add(std::move(section_block_light));
   }

   m_events.send_to_all(update_block_light);
}

void Dispatcher::send_chunk(game::PlayerId player_id, world::Chunk *chunk)
{
   clientbound_v1::ChunkData chunk_data;
   *chunk_data.mutable_chunk() = chunk->to_proto();

   m_events.send_to(chunk_data, player_id);
}

void Dispatcher::update_chunk_position(game::PlayerId player_id, const game::ChunkPosition &chunk_position)
{
   clientbound_v1::SetCenterChunk center_chunk;
   *center_chunk.mutable_position() = chunk_position.to_proto();

   m_events.send_to(center_chunk, player_id);
}

void Dispatcher::synchronise_player_position_and_rotation(game::PlayerId player_id, math::Vector3 position,
                                                          float yaw, float pitch)
{
   clientbound_v1::PlayerPositionRotation player_pos_rot;
   *player_pos_rot.mutable_position() = position.to_proto();
   player_pos_rot.mutable_rotation()->set_yaw(yaw);
   player_pos_rot.mutable_rotation()->set_pitch(pitch);
   m_events.send_to(player_pos_rot, player_id);
}

void Dispatcher::set_spawn_position(game::PlayerId player_id, game::BlockPosition position, float angle)
{
   clientbound_v1::SetSpawnPosition set_spawn;
   set_spawn.set_position(position.as_long());
   set_spawn.set_angle(angle);

   m_events.send_to(set_spawn, player_id);
}

void Dispatcher::set_player_equipment(game::PlayerId player_id, game::EntityId entity_id,
                                      game::EquipmentSlot slot, game::ItemSlot item)
{
   clientbound_v1::SetEntityEquipment equipment;
   equipment.set_entity_id(entity_id);
   equipment.set_equipment_slot(slot.to_proto());
   equipment.mutable_item()->mutable_item_id()->set_id(static_cast<uint32_t>(item.item_id));
   equipment.mutable_item()->set_count(static_cast<uint32_t>(item.count));

   auto entity = m_entity_system.entity(entity_id);
   if (not entity.has_component<entity::component::Location>())
      return;

   this->send_to_players_in_view_distance_except(
           player_id, entity.component<entity::component::Location>().position(), equipment);
}

void Dispatcher::set_health_and_food(game::PlayerId player_id, float health, int food, float food_saturation)
{
   clientbound_v1::SetHealth equipment;
   equipment.set_health(health);
   equipment.set_food(food);
   equipment.set_food_saturation(food_saturation);

   m_events.send_to(equipment, player_id);
}

void Dispatcher::spawn_entity(game::EntityId entity_id, const math::Vector3 &position)
{
   auto entity = m_entity_system.entity(entity_id);

   clientbound_v1::SpawnEntity spawn_entity;
   entity.serialize_to_proto(spawn_entity.mutable_entity());

   auto msg = fmt::format("spawning entity {} at {} {} {}", spawn_entity.entity().entity_id(), spawn_entity.entity().position().x(), spawn_entity.entity().position().y(),  spawn_entity.entity().position().z());
   this->send_chat(chat::MessageType::PlayerMessage, format::Builder().text(format::Color::Gold, "INFO  ").text(msg).to_string());
   this->send_to_players_in_view_distance(position, spawn_entity);
}

void Dispatcher::collect_item(game::EntityId collected_entity, game::EntityId collector_entity,
                              const math::Vector3 &position, int count)
{
   clientbound_v1::CollectItem collect_item;
   collect_item.set_collected_entity_id(collected_entity);
   collect_item.set_collector_entity_id(collector_entity);
   collect_item.set_count(static_cast<std::uint32_t>(count));

   this->send_to_players_in_view_distance(position, collect_item);
}

void Dispatcher::remove_entity(game::EntityId entity_id)
{
   clientbound_v1::RemoveEntity remove_entity;
   remove_entity.set_entity_id(entity_id);

   auto entity = m_entity_system.entity(entity_id);
   if (not entity.has_component<entity::component::Location>())
      return;

   this->send_to_players_in_view_distance(entity.component<entity::component::Location>().position(),
                                          remove_entity);
}

void Dispatcher::set_entity_velocity(game::EntityId entity_id, const math::Vector3 &position,
                                     const math::Vector3s &velocity)
{
   clientbound_v1::SetEntityVelocity update_velocity;
   update_velocity.set_entity_id(entity_id);
   *update_velocity.mutable_velocity() = velocity.to_proto();

   this->send_to_players_in_view_distance(position, update_velocity);
}

void Dispatcher::send_to_players_in_view_distance(const math::Vector3 &position,
                                                  const google::protobuf::Message &message) const
{
   auto entities = m_entity_system.list_entities_in_view_distance(position);
   std::vector<game::PlayerId> players;
   players.reserve(entities.size());
   for (auto entity_id : entities) {
      auto entity = m_entity_system.entity(entity_id);
      if (not entity.has_component<entity::component::Player>())
         continue;

      const auto &player = entity.component<entity::component::Player>();
      players.push_back(player.id());
   }

   m_events.send_to_many(message, players);
}

void Dispatcher::send_to_players_in_view_distance_except(game::PlayerId player_id,
                                                         const math::Vector3 &position,
                                                         const google::protobuf::Message &message) const
{
   auto entities = m_entity_system.list_entities_in_view_distance(position);
   std::vector<game::PlayerId> players;
   players.reserve(entities.size());
   for (auto entity_id : entities) {
      auto entity = m_entity_system.entity(entity_id);
      if (not entity.has_component<entity::component::Player>())
         continue;

      const auto &player = entity.component<entity::component::Player>();
      if (player.id() == player_id)
         continue;

      players.push_back(player.id());
   }

   m_events.send_to_many(message, players);
}

void Dispatcher::remove_entity_for_player(game::PlayerId player_id, game::EntityId entity_id)
{
   auto msg = fmt::format("removing entity {} for player {}", entity_id, boost::uuids::to_string(player_id));
   this->send_direct_chat(player_id, chat::MessageType::PlayerMessage,
                          format::Builder().bold(format::Color::Gold, "INFO ").text(msg).to_string());

   clientbound_v1::RemoveEntity remove_entity;
   remove_entity.set_entity_id(entity_id);
   m_events.send_to(remove_entity, player_id);
}

void Dispatcher::spawn_entity_for_player(game::PlayerId player_id, game::EntityId entity_id)
{
   auto entity = m_entity_system.entity(entity_id);

   clientbound_v1::SpawnEntity spawn_entity;
   entity.serialize_to_proto(spawn_entity.mutable_entity());

   m_events.send_to(spawn_entity, player_id);
}

void Dispatcher::spawn_player_for_player(game::PlayerId receiver, game::PlayerId spawned_player,
                                         game::EntityId entity_id)
{
   auto msg = fmt::format("spawning entity {} for player {}", entity_id, boost::uuids::to_string(receiver));
   this->send_direct_chat(receiver, chat::MessageType::PlayerMessage,
                          format::Builder().bold(format::Color::Gold, "INFO ").text(msg).to_string());

   auto entity = m_entity_system.entity(entity_id);

   clientbound_v1::SpawnPlayer spawn_player;
   *spawn_player.mutable_player_id() = game::player::write_id_to_proto(spawned_player);
   entity.serialize_player_to_proto(spawn_player.mutable_entity());

   m_events.send_to(spawn_player, receiver);
}

}// namespace minecpp::service::engine
