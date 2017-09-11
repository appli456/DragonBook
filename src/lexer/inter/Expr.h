//
// Created by lirz on 2017/9/7.
//

#ifndef PARSER_EXPR_H
#define PARSER_EXPR_H

#include <string>

#include "../../lib.h"
#include "Node.h"
#include "../Token.h"

MAIN_NAMESPACE_START
INTER_START

using std::string;
using LexerNamespace::Token;
using SymbolNamespace::Type;

class Expr : public Node {
public:
    Expr();
    Expr(Token& tok, Type& t);
    ~Expr();

    virtual const Expr* gen();
    virtual Expr* reduce();
    void jumping(int t, int f);
    void emit_jump(string test, int t, int f);
    virtual string to_string() const;

    Token op;
    Type type;
};

INTER_END
MAIN_NAMESPACE_END
#endif //PARSER_EXPR_H
