//
// Created by lirz on 2017/8/25.
//

#include "Env.h"

MAIN_NAMESPACE_START
SYMBOL_START

    Env::Env(const Env &e)
    {
        prev = &(const_cast<Env&>(e));
    }

    Env::Env(const Env* e)
    {
        prev = const_cast<Env*>(e);
    }

    void Env::put(Token *tkn, Id *id) {
        table[tkn] = id;
    }

    const Id* Env::get(Token *tkn) {
        auto it = table.find(tkn);
        if (it != table.end()) {
            return table[tkn];
        }

        return nullptr;
    }




SYMBOL_END
MAIN_NAMESPACE_END