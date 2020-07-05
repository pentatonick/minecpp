#pragma once
#include <string>
#include <variant>
#include <vector>

namespace Chat {

enum class TokenType { Identifier, Integer, Float };

struct Token {
   TokenType type;
   std::string value;
   int column = 0;
};

using Argument = std::variant<std::string, int, double>;

struct Command {
   std::string name;
   std::vector<Argument> args;
};

using ParsingResult = std::variant<Command, std::string>;

std::vector<Token> lex(std::string_view command);
ParsingResult parse(std::vector<Token> &tokens);

} // namespace Chat
