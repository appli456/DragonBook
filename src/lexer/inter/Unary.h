//
// Created by lirz on 2017/9/11.
//

#ifndef PARSER_UNARY_H
#define PARSER_UNARY_H

#include <string>

#include "../../lib.h"
#include "./Op.h"
#include "./Expr.h"
#include "../Token.h"

using std::string;
MAIN_NAMESPACE_START

INTER_START

class Unary : public Op {
public:
    Expr expr;

    Unary();
    Unary(Token &tkn, Expr& x);

    const Expr* gen() override;

    string to_string() const override ;
};

INTER_END

MAIN_NAMESPACE_END

#endif //PARSER_UNARY_H
