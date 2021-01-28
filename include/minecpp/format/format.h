#pragma once
#include <sstream>

namespace minecpp::format {

enum class Color : uint8_t {
   Black,
   DarkBlue,
   DarkGreen,
   DarkAqua,
   DarkRed,
   DarkPurple,
   Gold,
   Gray,
   DarkGray,
   Blue,
   Green,
   Aqua,
   Red,
   LightPurple,
   Yellow,
   White,
};

std::string_view color_to_str(Color c);


class Builder {
   std::stringstream stream;
   bool first = true;

 public:
   Builder();

   void text(std::string_view s);
   void text(Color c, std::string_view s);
   void bold(Color c, std::string_view s);

   std::string build();

};

}