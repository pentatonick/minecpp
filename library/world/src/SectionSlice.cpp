#include <minecpp/world/SectionSlice.h>
#include <unordered_map>
#include <utility>

namespace minecpp::world {

mb::result<game::LightValue> SectionSlice::get_light(game::LightType light_type,
                                                     const game::BlockPosition &pos)
{
   auto chunk_section_pos = pos.chunk_section_position();
   auto sec = m_sections.find(chunk_section_pos.hash());
   if (sec == m_sections.end()) {
      return mb::error("no such section");
   }

   return sec->second.get_light(light_type, pos);
}

mb::emptyres SectionSlice::set_light(game::LightType light_type, const game::BlockPosition &pos,
                                     game::LightValue value)
{
   auto chunk_section_pos = pos.chunk_section_position();
   auto sec = m_sections.find(chunk_section_pos.hash());
   if (sec == m_sections.end()) {
      return mb::error("no such section");
   }

   sec->second.set_light(light_type, pos, value);
   return mb::ok;
}

world::Section &SectionSlice::operator[](game::ChunkSectionPosition position)
{
   return m_sections.at(position.hash());
}

SectionSlice::SectionSlice(const game::SectionRange &range,
                           std::unordered_map<mb::u64, Section> sections) :
    m_range(range),
    m_sections(std::move(sections))
{
}

SectionSlice SectionSlice::from_proto(const proto::chunk::v1::SectionSlice &slice)
{
   std::unordered_map<mb::u64, Section> sections{};
   for (auto &sec : slice.sections()) {
      sections.emplace(game::ChunkSectionPosition::from_proto(sec.position()).hash(), Section::from_proto(sec.section()));
   }
   return {game::SectionRange::from_proto(slice.range()), std::move(sections)};
}

proto::chunk::v1::SectionSlice SectionSlice::to_proto()
{
   proto::chunk::v1::SectionSlice result;
   *result.mutable_range() = m_range.to_proto();
   for (auto pos : m_range) {
      proto::chunk::v1::SectionWithPosition section_with_position;
      *section_with_position.mutable_position() = pos.to_proto();
      *section_with_position.mutable_section() = m_sections.at(pos.hash()).to_proto();
      result.mutable_sections()->Add(std::move(section_with_position));
   }
   return result;
}

}