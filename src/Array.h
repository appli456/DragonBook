//
// Created by lirz on 2017/8/29.
//

#ifndef PARSER_ARRAY_H
#define PARSER_ARRAY_H

#include "./../lib/lib.h"
#include "./../lib/tag.h"
#include "./Type.h
MAIN_NAMESPACE_START
SYMBOL_START

class Array : public Type {
public:
    Type const* of;
    int size;
    Array() = default;
    Array(int sz, Type p);
};

SYMBOL_END
MAIN_NAMESPACE_END
#endif //PARSER_ARRAY_H
