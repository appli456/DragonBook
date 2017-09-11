//
// Created by lirz on 2017/9/7.
//

#ifndef PARSER_ID_H
#define PARSER_ID_H

#include "../../lib.h"
#include "Expr.h"
#include "../Word.h"
#include "./../symbol/Type.h"

MAIN_NAMESPACE_START
INTER_START

using LexerNamespace::Word;
using SymbolNamespace::Type;

class Id : public Expr {
public:
    int offset = 0;
    Id() = default;
    Id(Word id, Type t, int b);
};

INTER_END
MAIN_NAMESPACE_END
#endif //PARSER_ID_H
