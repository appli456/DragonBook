//
// Created by lirz on 2017/8/24.
//

#include "Token.h"
#include "../lib/lib.h"
#include <string>

MAIN_NAMESPACE_START
LEXER_START
    Token::Token() = default;

    Token::Token(int t)
    {
        tag = t;
    }

    string Token::to_string() const
    {
        return std::to_string(static_cast<char>(tag));
    }

    int Token::get_tag() const {
        return tag;
    }
LEXER_END
MAIN_NAMESPACE_END