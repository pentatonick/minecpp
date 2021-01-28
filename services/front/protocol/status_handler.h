#pragma once
#include "handler.h"
#include <minecpp/minenet/msg/reader.h>

namespace Front::Protocol {

class StatusHandler : public Handler {
 public:
   StatusHandler();
   void handle(const std::shared_ptr<Connection> &conn,
               MineNet::Message::Reader &r) override;
   void handle_disconnect(Connection &conn) override;

 private:
   void handle_info(const std::shared_ptr<Connection> &conn);
   void handle_ping(const std::shared_ptr<Connection> &conn,
                    MineNet::Message::Reader &r);
};

} // namespace Front::Protocol
