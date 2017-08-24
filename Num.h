//
// Created by lirz on 2017/8/24.
//

#ifndef PARSER_NUM_H
#define PARSER_NUM_H

#include "lib.h"
#include "Token.h"
#include <string>
using std::string;

MAIN_NAMESPACE_START
LEXER_START

class Num: public Token {
public:
    Num();
    explicit Num(int v);
    string to_string() const override;

private:
    int value;
};

LEXER_END
MAIN_NAMESPACE_END

#endif //PARSER_NUM_H
