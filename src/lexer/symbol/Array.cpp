//
// Created by lirz on 2017/8/29.
//

#include "Array.h"

MAIN_NAMESPACE_START
SYMBOL_START

    Array::Array(int sz, Type p)
            : Type(ARRAY_TOKEN, LexerNamespace::INDEX, sz * p.width),
              size(sz),
              of(&p)
    {}

    Array::~Array()
    {
        delete of;
        lexme.clear();
    }

    string Array::to_string()
    {
        return "[" + std::to_string(size) + "]" + of->to_string();
    }

SYMBOL_END
MAIN_NAMESPACE_END
