#pragma once
#include "Handler.h"
#include <minecpp/network/message/Reader.h>

namespace minecpp::net::status::sb {
class Status;
class Ping;
}// namespace minecpp::net::status::sb

namespace minecpp::service::front::protocol {

class StatusHandler : public Handler
{
 public:
   StatusHandler();
   void handle(Connection &conn, minecpp::network::message::Reader &r) override;
   void handle_disconnect(Connection &conn) override;

   void on_status(Connection &connection, const net::status::sb::Status &status);
   static void on_ping(Connection &connection, const net::status::sb::Ping &ping);
   static void on_failure(Connection &connection, std::uint8_t message_id);
};

}// namespace minecpp::service::front::protocol
