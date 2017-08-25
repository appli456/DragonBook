//
// Created by lirz on 2017/8/24.
//

#ifndef PARSER_WORD_H
#define PARSER_WORD_H

#include "../lib/lib.h"
#include "Token.h"
#include "./../lib/tag.h"
#include <string>
#include <algorithm>
#include <iterator>

using std::string;

MAIN_NAMESPACE_START
LEXER_START
    class Word : public Token{
    public:
        Word();
        Word(string& s, int tag);
        Word(string s, int tag);
        string to_string() const override;

        static const Word and_word{"&&", AND};
        // And token define
        static const Word or_word{"||", OR};
        // Or token define
        static const Word eq_word{"==", EQ};
        // Equal token define
        static const Word ne_word{"!=", NE};
        // Not equal token define
        static const Word le_word{"<=", LE};
        // Less than or equal token define
        static const Word ge_word{">=", GE};
        // greater then or equal token define
        static const Word minus_word{"minus", MINUS};
        // Minus token define
        static const Word true_word{"true", TRUE};
        // True token define
        static const Word false_word{"false", FALSE};
        // False token define
        static const Word temp_word{"t", TEMP};
        // Temp token define


    protected:
        string lexme;
    };
LEXER_END
MAIN_NAMESPACE_END


#endif //PARSER_WORD_H
