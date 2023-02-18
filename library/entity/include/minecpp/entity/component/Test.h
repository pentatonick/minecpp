#pragma once
#include <minecpp/game/Entity.h>
#include <minecpp/proto/entity/v1/Entity.pb.h>

namespace minecpp::entity::component {

class Test
{
 public:
   Test() = default;

   void on_attached(game::Entity &entity);
   void on_position_change(game::EntityId entity_id, const math::Vector3 &old_position,
                           const math::Vector3 &new_position);

 private:
   int m_position_change_count{};
};

}// namespace minecpp::entity::component
