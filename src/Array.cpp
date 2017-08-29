//
// Created by lirz on 2017/8/29.
//

#include "Array.h"

MAIN_NAMESPACE_START
SYMBOL_START

    Array::Array(int sz, Type p)
            : Type(ARRAY_TOKEN, LexerNamespace::INDEX, sz * p.width)
    {

    }

SYMBOL_END
MAIN_NAMESPACE_END
