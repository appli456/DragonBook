//
// Created by lirz on 2017/8/25.
//

#ifndef PARSER_ENV_H
#define PARSER_ENV_H
#include <unordered_map>

#include "../../lib.h"
#include "../Token.h"
#include "../inter/Id.h"

MAIN_NAMESPACE_START
SYMBOL_START

using LexerNamespace::Token;
using InterNamespace::Id;
using std::unordered_map;

class Env
{
public:
    Env() = default;
    Env(const Env& e);
    explicit Env(const Env* e);
    void put(Token* tkn, Id* id);
    const Id* get(Token* tkn);

protected:
    Env* prev;

private:
    unordered_map<const Token*, const Id*>table;
};

SYMBOL_END
MAIN_NAMESPACE_END

#endif //PARSER_ENV_H
