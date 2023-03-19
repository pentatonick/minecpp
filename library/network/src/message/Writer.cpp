#include <boost/uuid/uuid_io.hpp>
#include <cstring>
#include <minecpp/network/message/Writer.h>
#include <minecpp/util/Cast.hpp>
#include <minecpp/util/Compression.h>

namespace minecpp::network::message {

void Writer::write_byte(std::uint8_t value)
{
   m_stream.write(reinterpret_cast<char *>(&value), sizeof(std::uint8_t));
}

void Writer::write_varint(std::uint32_t value)
{
   for (;;) {
      if (value & (~0x7Fu)) {
         write_byte((value & 0x7Fu) | 0x80u);
         value >>= 7;
         continue;
      }
      write_byte(static_cast<std::uint8_t>(value));
      break;
   }
}

void Writer::write_varlong(std::uint64_t value)
{
   for (;;) {
      if (value & (~0x7Fu)) {
         write_byte((value & 0x7Fu) | 0x80u);
         value >>= 7;
         continue;
      }
      write_byte(static_cast<std::uint8_t>(value));
      break;
   }
}

int len_varint(int value)
{
   int result = 1;
   while (static_cast<std::uint32_t>(value) & (~0x7Fu)) {
      ++result;
      value >>= 7;
   }
   return result;
}

void Writer::write_string(std::string_view s)
{
   write_varint(static_cast<std::uint32_t>(s.size()));
   m_stream << s;
}

void Writer::write_uuid_str(boost::uuids::uuid id)
{
   write_string(boost::uuids::to_string(id));
}

void Writer::write_uuid(boost::uuids::uuid id)
{
   m_stream.write((char *) id.data, 16);
}

void Writer::write_bytes(const char *data, size_t size)
{
   m_stream.write(data, static_cast<int>(size));
}

void Writer::write_float(float value)
{
   static_assert(sizeof(std::uint32_t) == sizeof(float));
   auto value_be = boost::endian::native_to_big(util::unsafe_cast<std::uint32_t>(value));
   m_stream.write(reinterpret_cast<char *>(&value_be), sizeof(value_be));
}

void Writer::write_double(double value)
{
   static_assert(sizeof(std::uint64_t) == sizeof(double));
   auto value_be = boost::endian::native_to_big(util::unsafe_cast<std::uint64_t>(value));
   m_stream.write(reinterpret_cast<char *>(&value_be), sizeof(value_be));
}

static void write_buff_size(std::uint8_t *buff, std::size_t size)
{
   int pos = 0;
   for (;;) {
      if (size & (~0x7Fu)) {
         buff[pos++] = (size & 0x7Fu) | 0x80u;
         size >>= 7;
         continue;
      }
      buff[pos++] = static_cast<std::uint8_t>(size);
      break;
   }
}

std::tuple<uint8_t *, size_t> Writer::buff(std::size_t comp_thres)
{
   m_stream.seekg(0, std::ios::end);
   auto buff_size = static_cast<std::size_t>(m_stream.tellg());

   if (comp_thres > 0) {
      if (buff_size < comp_thres) {
         // compression threshold not reached, just write data
         // put zero after size to indicate not compressed
         int total_size_num_bytes = len_varint(static_cast<int>(buff_size + 1));
         auto header_size         = static_cast<std::size_t>(total_size_num_bytes) + 1;
         auto buff                = new uint8_t[header_size + buff_size];
         write_buff_size(buff, buff_size + 1);
         buff[total_size_num_bytes] = 0;
         m_stream.seekg(0, std::ios::beg);
         m_stream.read((char *) buff + header_size, static_cast<int>(buff_size));
         return std::make_tuple(buff, buff_size + header_size);
      }

      // reached compression threshold
      // compress the data, write total size, write uncompressed size
      // and write compressed data

      std::vector<char> compressed;
      m_stream.seekg(0, std::ios::beg);
      minecpp::util::compress_zlib(compressed, m_stream);

      auto decompressed_size_num_bytes = static_cast<std::size_t>(len_varint(static_cast<int>(buff_size)));
      auto total_size                  = decompressed_size_num_bytes + compressed.size();
      auto total_size_num_bytes        = static_cast<std::size_t>(len_varint(static_cast<int>(total_size)));

      auto header_size = total_size_num_bytes + decompressed_size_num_bytes;

      auto buff = new uint8_t[header_size + compressed.size()];

      write_buff_size(buff, total_size);
      write_buff_size(buff + total_size_num_bytes, buff_size);

      std::memcpy(buff + header_size, compressed.data(), compressed.size());

      return {buff, header_size + compressed.size()};
   }

   // no compression, no encryption
   // write size, write data

   auto header_size = static_cast<std::size_t>(len_varint(static_cast<int>(buff_size)));

   auto buff = new uint8_t[header_size + buff_size];
   write_buff_size(buff, buff_size);

   m_stream.seekg(0, std::ios::beg);
   m_stream.read((char *) buff + header_size, static_cast<int>(buff_size));

   return {buff, buff_size + header_size};
}

std::ostream &Writer::raw_stream()
{
   return m_stream;
}

std::size_t Writer::peek_size()
{
   m_stream.seekg(0, std::ios::end);
   auto size = m_stream.tellg();
   m_stream.seekg(0, std::ios::beg);
   return static_cast<std::size_t>(size);
}

void Writer::write_from(Writer &other)
{
   auto view = other.m_stream.view();
   m_stream.write(view.data(), static_cast<std::streamsize>(view.size()));
}

void Writer::write_long(uint64_t value)
{
   value = boost::endian::native_to_big(value);
   m_stream.write((char *) &value, sizeof(uint64_t));
}

void Writer::write_short(int16_t value)
{
   value = boost::endian::native_to_big(value);
   m_stream.write((char *) &value, sizeof(int16_t));
}

}// namespace minecpp::network::message
