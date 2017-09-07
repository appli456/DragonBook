//
// Created by lirz on 2017/8/25.
//

#ifndef PARSER_ENV_H
#define PARSER_ENV_H
#include <unordered_map>

#include "./../lib/lib.h"
#include "./Token.h"

MAIN_NAMESPACE_START
SYMBOL_START

using std::unordered_map;

class Env
{
public:
    Env() = default;
    Env(const Env& e);
    explicit Env(Env const* e);

protected:
    Env* prev;

private:

};

SYMBOL_END
MAIN_NAMESPACE_END

#endif //PARSER_ENV_H
