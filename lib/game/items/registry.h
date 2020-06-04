#pragma once
#include "item.h"

namespace Game {

const Item &item_by_id(int id);
ItemId item_id_from_tag(std::string_view tag);

}
