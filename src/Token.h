//
// Created by lirz on 2017/8/24.
//

#ifndef PARSER_TOKEN_H
#define PARSER_TOKEN_H

#include <string>
#include "../lib/lib.h"
using std::string;

MAIN_NAMESPACE_START
LEXER_START

class Token {
public:
    Token();
    Token(const Token& t) = default;
    Token(Token&& t) noexcept = default;
    explicit Token(int t);

    virtual ~Token() = default;

    Token& operator=(const Token& t) = default;
    Token& operator=(Token&& v) noexcept = default;

    virtual string to_string() const;
    int tag;
};

LEXER_END
MAIN_NAMESPACE_END


#endif //PARSER_TOKEN_H
