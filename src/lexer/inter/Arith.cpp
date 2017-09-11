//
// Created by lirz on 2017/9/8.
//

#include "Arith.h"

MAIN_NAMESPACE_START

INTER_START

    Arith::Arith() {}

    Arith::Arith(Token &tkn, Expr &x1, Expr &x2) :
            Op(tkn, const_cast<Type&>(*(Type::max(x1.type, x2.type)))) {
        expr1 = x1;
        expr2 = x2;
    }

    const Expr* Arith::gen() {
        return new Arith(op, *expr1.reduce(), *expr2.reduce());
    }

    string Arith::to_string() const {
        return expr1.to_string() + " " + op.to_string() + " " + expr2.to_string();
    }

INTER_END

MAIN_NAMESPACE_END