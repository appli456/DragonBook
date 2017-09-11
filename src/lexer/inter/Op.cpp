//
// Created by lirz on 2017/9/8.
//

#include "Op.h"

MAIN_NAMESPACE_START

INTER_START

    Op::Op() {

    }

    Op::Op(Token &tkn, Type &t) : Expr(tkn, t) {

    }

    Expr* Op::reduce() {
        const Expr* e = gen();
        Temp* t = new Temp(type);
        emit(t->to_string() + " = " + e->to_string());
        delete e;
        return t;
    }

INTER_END

MAIN_NAMESPACE_END