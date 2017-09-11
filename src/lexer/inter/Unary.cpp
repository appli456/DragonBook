//
// Created by lirz on 2017/9/11.
//

#include "Unary.h"

MAIN_NAMESPACE_START

INTER_START

    Unary::Unary() {}

    Unary::Unary(Token &tkn, Expr &x) :
            Op(tkn,
               const_cast<Type&>(*Type::max(const_cast<Type&>(*(Type::Int)), x.type))) {
        expr = x;
    }

    const Expr* Unary::gen() {
        return new Unary(op, *expr.reduce());;
    }

    string Unary::to_string() const {
        return op.to_string() + " " + expr.to_string();
    }

INTER_END

MAIN_NAMESPACE_END