#include <game/blocks/registry.h>
#include <fmt/core.h>

auto main() -> int {
   for (auto &block : Game::Block::blocks) {
      fmt::print("minecraft:{}\n", block.tag());
      for (const auto &attrib : block.attributes) {
         fmt::print("  - {} [", attrib->name());
         for (int i = 0; i < attrib->num_states() - 1; ++i) {
            fmt::print("{}, ", attrib->name_of(i));
         }
         fmt::print("{}]\n", attrib->name_of(attrib->num_states() -1));
      }
   }
}
