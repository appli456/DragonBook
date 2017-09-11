//
// Created by lirz on 2017/9/8.
//

#ifndef PARSER_OP_H
#define PARSER_OP_H

#include "../../lib.h"
#include "Expr.h"
#include "../Token.h"
#include "./../symbol/Type.h"
#include "./Temp.h"

MAIN_NAMESPACE_START

INTER_START

class Op : public Expr{
public:
    Op();
    Op(Token& tkn, Type& t);
    Expr* reduce() override;
};

INTER_END

MAIN_NAMESPACE_END
#endif //PARSER_OP_H
