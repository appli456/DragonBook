//
// Created by lirz on 2017/9/11.
//

#include "Temp.h"
#include "../Word.h"

MAIN_NAMESPACE_START

INTER_START

    int Temp::count = 1;

    Temp::Temp() {}

    Temp::Temp(Type &t) :
            Expr(const_cast<LexerNamespace::Word&>(*LexerNamespace::Word::temp_word), t) {
        number = ++count;
    }

    string Temp::to_string() const {
        return "t" + std::to_string(number);
    }

INTER_END

MAIN_NAMESPACE_END