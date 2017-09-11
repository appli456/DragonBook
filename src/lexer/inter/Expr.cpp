//
// Created by lirz on 2017/9/7.
//

#include "Expr.h"

MAIN_NAMESPACE_START

INTER_START

    Expr::Expr() {}
    Expr::Expr(Token &tok, Type &t) {
        op = tok;
        type = t;
    }

    Expr::~Expr() {

    }

    const Expr* Expr::gen() {
        return this;
    }

    Expr* Expr::reduce() {
        return this;
    }

    void Expr::jumping(int t, int f) {
        emit_jump(to_string(), t, f);
    }

    void Expr::emit_jump(string test, int t, int f) {
        string expression;

        if (t != 0 && f != 0) {
            emit("if " + test + " goto L" + std::to_string(t));
            emit("goto L" + f);
        } else if (t != 0) {
            emit("if " + test + " goto L" + std::to_string(t));
        } else if (f != 0) {
            emit("iffalse " + test + " goto L" + std::to_string(f));
        }
    }

    string Expr::to_string() const {
        return op.to_string();
    }

INTER_END

MAIN_NAMESPACE_END
