#pragma once
#include "protocol/Handler.h"
#include "protocol/Protocol.h"
#include <boost/asio/io_context.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/streambuf.hpp>
#include <boost/pool/object_pool.hpp>
#include <boost/uuid/uuid.hpp>
#include <mb/int.h>
#include <memory>
#include <minecpp/crypto/AESKey.h>
#include <minecpp/network/message/Io.h>
#include <minecpp/network/message/Message.h>
#include <minecpp/util/StaticQueue.h>
#include <queue>
#include <spdlog/spdlog.h>
#include <tuple>

namespace minecpp::service::front {

using boost::asio::ip::tcp;
class Server;

using ConnectionId = mb::size;

class Connection
{
   friend Server;

 public:
   using Ptr = std::shared_ptr<Connection>;

   explicit Connection(boost::asio::io_context &ctx, Server *server);
   ~Connection();

   void set_non_blocking();

   void async_write_then_read(const Ptr &conn, container::Buffer buffer, Protocol::Handler &h);
   void async_write(const Ptr &conn, container::Buffer buffer);
   void async_write_then_disconnect(const Ptr &conn, container::Buffer buffer);

   void send(const Ptr &conn, minecpp::network::message::Writer &w);
   void send_and_read(const Ptr &conn, minecpp::network::message::Writer &w, Protocol::Handler &h);
   void send_and_disconnect(const Ptr &conn, minecpp::network::message::Writer &w);

   void set_encryption(container::Buffer key);
   [[nodiscard]] crypto::AESKey *encryption_key() const;

   Server *get_server();

   Protocol::State state();
   void set_state(Protocol::State s);
   void set_compression_threshold(std::size_t threshold);
   void set_service_id(boost::uuids::uuid id);
   boost::uuids::uuid service_id();

   void set_uuid(boost::uuids::uuid uuid);

   [[nodiscard]] const boost::uuids::uuid &uuid() const;
   [[nodiscard]] ConnectionId id() const;
   [[nodiscard]] mb::size compression_threshold() const;

   void push_chunk(int x, int z);
   minecpp::game::ChunkPosition pop_chunk();
   bool has_chunks();

   [[nodiscard]] tcp::socket &socket();

   mb::u8 *alloc_byte();
   void free_byte(mb::u8 *byte);

   std::string user_name;

 private:
   ConnectionId m_id = -1;
   tcp::socket m_socket;

   boost::uuids::uuid m_player_id{};
   boost::uuids::uuid m_engine_service_id{};

   Server *m_server;
   Protocol::State m_state;
   mb::size m_compression_threshold = 0;
   boost::object_pool<mb::u8> m_byte_pool;
   minecpp::util::StaticQueue<minecpp::game::ChunkPosition, 200> m_chunk_queue{};

   std::unique_ptr<crypto::AESKey> m_encryption_key{};
};

void async_read_varint(const Connection::Ptr &conn, mb::u32 result, mb::u32 shift,
                       const std::function<void(mb::u32)> &callback);
void async_read_packet(const Connection::Ptr &conn, Protocol::Handler &handler);

template<typename M>
void send(const Connection::Ptr &conn, M msg)
{
   auto w = msg.serialize();
   conn->send(conn, w);
}

template<typename M>
void send_and_read(const Connection::Ptr &conn, M msg, Protocol::Handler &h)
{
   auto w = msg.serialize();
   conn->send_and_read(conn, w, h);
}

template<typename M>
void send_and_disconnect(const Connection::Ptr &conn, M msg)
{
   auto w = msg.serialize();
   conn->send_and_disconnect(conn, w);
}

}// namespace minecpp::service::front
