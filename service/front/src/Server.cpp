#include "Server.h"
#include "protocol/Protocol.h"
#include <boost/asio.hpp>
#include <minecpp/network/message/File.h>
#include <spdlog/spdlog.h>
#include <utility>

namespace minecpp::service::front {

Server::Server(boost::asio::io_context &ctx, mb::u16 port, Protocol::Handler *play, Protocol::Handler *status,
               Protocol::Handler *login) :
    m_acceptor(ctx, tcp::endpoint(tcp::v4(), port)),
    m_handlers{play, status, login}
{
   accept_conn();
}

void Server::accept_conn()
{
   auto conn = std::make_shared<Connection>((boost::asio::io_context &) m_acceptor.get_executor().context(),
                                            this);
   m_acceptor.async_accept(conn->m_socket, [this, conn](const boost::system::error_code &err) {
      if (err) {
         spdlog::error("error accepting connection: {}", err.message());
         accept_conn();
         return;
      }

      handshake(conn);
      accept_conn();
   });
}

void Server::handshake(const std::shared_ptr<Connection> &conn)
{
   while (!conn->socket().non_blocking()) {
      spdlog::debug("blocking socket setting to nonblocking");
      conn->socket().non_blocking(true);
   }

   async_read_varint(conn, 0u, 0u, [this, conn](mb::u32 packet_size) {
      if (packet_size == 0)
         return;

      auto buff = new boost::asio::streambuf(packet_size);
      boost::asio::async_read(
              conn->socket(), *buff,
              [this, conn, buff](const boost::system::error_code &err, size_t /* size */) {
                 if (err) {
                    delete buff;
                    spdlog::warn("error reading data from client: {}", err.message());
                    return;
                 }
                 std::istream s(buff);
                 minecpp::network::message::Reader r(s);
                 if (r.read_byte() != 0) {
                    delete buff;
                    return;
                 }

                 auto protocol_version = r.read_varint();
                 auto host             = r.read_string();
                 auto port             = r.read_big_endian<uint16_t>();
                 auto request_state    = static_cast<Protocol::State>(r.read_varint());
                 delete buff;

                 spdlog::debug("client information: proto_version={}, host={}, port={}, requested_handler={}",
                               protocol_version, host, port, static_cast<int>(request_state));

                 if (request_state != Protocol::Login && request_state != Protocol::Status) {
                    delete buff;
                    return;
                 }

                 // TODO: Mutex here ??
                 conn->set_state(request_state);
                 conn->m_id = m_top_connection;
                 m_connections.emplace(m_top_connection, conn);
                 ++m_top_connection;

                 async_read_packet(conn, *m_handlers[request_state]);
              });
   });
}

void Server::drop_connection(ConnectionId id)
{
   auto connection_it = m_connections.find(id);
   if (connection_it == m_connections.end()) {
      spdlog::error("no such connection id: {}", id);
      return;
   }

   this->get_handler(connection_it->second->state()).handle_disconnect(*connection_it->second);

   auto uuid             = connection_it->second->uuid();
   auto player_id_map_it = m_player_id_to_connection_id_map.find(uuid);
   if (player_id_map_it != m_player_id_to_connection_id_map.end()) {
      m_player_id_to_connection_id_map.erase(player_id_map_it);
   } else {
      spdlog::error("no such player id: {}", boost::uuids::to_string(uuid));
   }

   m_connections.erase(connection_it);
}

Protocol::Handler &Server::get_handler(const Protocol::State state)
{
   return *m_handlers[state];
}

void Server::index_connection(game::PlayerId index, ConnectionId id)
{
   m_player_id_to_connection_id_map[index] = id;
}

bool Server::has_connection(game::PlayerId player_id)
{
   return m_player_id_to_connection_id_map.contains(player_id);
}

std::shared_ptr<Connection> Server::connection_by_player_id(game::PlayerId player_id)
{
   auto connection_id_it = m_player_id_to_connection_id_map.find(player_id);
   if (connection_id_it == m_player_id_to_connection_id_map.end()) {
      return nullptr;
   }

   auto connection_it = m_connections.find(connection_id_it->second);
   if (connection_it == m_connections.end()) {
      return nullptr;
   }

   return connection_it->second;
}

}// namespace minecpp::service::front
