//
// Created by lirz on 2017/8/24.
//

#include "Num.h"
#include "../lib/lib.h"
#include "../lib/tag.h"
#include <string>

MAIN_NAMESPACE_START
LEXER_START
    Num::Num() = default;
    Num::Num(int v):Token(NUM)
    {
        value = v;
    }

    string Num::to_string() const
    {
        return std::to_string(value);
    }
LEXER_END
MAIN_NAMESPACE_END