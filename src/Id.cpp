//
// Created by lirz on 2017/9/7.
//

#include "Id.h"

MAIN_NAMESPACE_START

INTER_START

    Id::Id(Word id, Type t, int b) :
            Expr(id, t) {
        offset = b;
    }

INTER_END

MAIN_NAMESPACE_END