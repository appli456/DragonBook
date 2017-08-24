//
// Created by lirz on 2017/8/24.
//

#include "Word.h"
MAIN_NAMESPACE_START
LEXER_START

    Word::Word()
    {
        lexme = "";
    }

    Word::Word(string& s, int tag)
            :Token(tag)
    {
        std::copy(s.begin(), s.end(), lexme);
    }

    string Word::to_string() const
    {
        return lexme;
    }

LEXER_END
MAIN_NAMESPACE_END