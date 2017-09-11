//
// Created by lirz on 2017/9/11.
//

#ifndef PARSER_TEMP_H
#define PARSER_TEMP_H

#include <string>

#include "../../lib.h"
#include "./Expr.h"
#include "../Word.h"
#include "./../symbol/Type.h"

using std::string;
MAIN_NAMESPACE_START

INTER_START

class Temp : public Expr{
public:
    static int count;
    int number;

    Temp();
    Temp(Type &t);
    string to_string() const override;
};

INTER_END

MAIN_NAMESPACE_END

#endif //PARSER_TEMP_H
