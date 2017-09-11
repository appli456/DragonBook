//
// Created by lirz on 2017/8/29.
//

#ifndef PARSER_ARRAY_H
#define PARSER_ARRAY_H

#include<string>
#include "../../lib.h"
#include "../../tag.h"
#include "Type.h"
MAIN_NAMESPACE_START
SYMBOL_START

using std::string;
class Array : public Type {
public:
    Type* of{nullptr};
    int size{0};
    Array() = default;
    Array(int sz, Type p);
    ~Array() override;

    string to_string();
};

SYMBOL_END
MAIN_NAMESPACE_END
#endif //PARSER_ARRAY_H
