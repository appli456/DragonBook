//
// Created by lirz on 2017/8/24.
//

#ifndef PARSER_TOKEN_H
#define PARSER_TOKEN_H

#include <string>
#include "lib.h"
using std::string;

MAIN_NAMESPACE_START
LEXER_START

class Token {
public:
    Token();
    explicit Token(int t);

    virtual string to_string() const;
    int get_tag() const;

protected:
    int tag;
};

LEXER_END
MAIN_NAMESPACE_END


#endif //PARSER_TOKEN_H
