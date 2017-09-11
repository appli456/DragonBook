//
// Created by lirz on 2017/9/8.
//

#ifndef PARSER_ARITH_H
#define PARSER_ARITH_H

#include "../../lib.h"
#include "Op.h"
#include "./../symbol/Type.h"

MAIN_NAMESPACE_START

INTER_START

class Arith : public Op{
public:
    Expr expr1, expr2;
    Arith();
    Arith(Token& tkn, Expr& x1, Expr& x2);
    const Expr* gen() override ;
    string to_string() const override;
};

INTER_END

MAIN_NAMESPACE_END

#endif //PARSER_ARITH_H
