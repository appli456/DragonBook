//
// Created by lirz on 2017/8/24.
//

#include "Lexer.h"
#include "../lib/lib.h"

MAIN_NAMESPACE_START

LEXER_START
    int Lexer::line = 1;

    Lexer::Lexer()
    {

    }

    Token* Lexer::scan()
    {

    }

    void Lexer::reserve(const Word* w)
    {
        words[w->lexme] = w;
        delete w;
    }

    bool Lexer::read_char(char c)
    {

    }

    void Lexer::read_char()
    {

    }

LEXER_END

MAIN_NAMESPACE_END