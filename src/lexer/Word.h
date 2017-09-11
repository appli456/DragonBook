//
// Created by lirz on 2017/8/24.
//

#ifndef PARSER_WORD_H
#define PARSER_WORD_H

#include "../lib.h"
#include "Token.h"
#include "../tag.h"
#include <string>
#include <algorithm>
#include <iterator>

using std::string;

MAIN_NAMESPACE_START
LEXER_START
    class Word : public Token{
    public:
        Word();
        Word(Word& w);
        Word(Word&& w) noexcept ;
        Word(string& s, int tag);
        Word(const char* s, int tag);

        ~Word() override;

        Word& operator=(const Word& w);
        Word& operator=(Word&& w) noexcept;

        string to_string() const override;

        static const Word* and_word;
        // And token declare
        static const Word* or_word;
        // Or token declare
        static const Word* eq_word;
        // Equal token declare
        static const Word* ne_word;
        // Not equal token declare
        static const Word* le_word;
        // Less than or equal token declare
        static const Word* ge_word;
        // greater then or equal token declare
        static const Word* minus_word;
        // Minus token declare
        static const Word* true_word;
        // True token declare
        static const Word* false_word;
        // False token declare
        static const Word* temp_word;
        // Temp token declare

        string lexme = "";
    };

//    static const Word Word::and_word(AND_TOKEN, AND);
//    static const Word Word::or_word(OR_TOKEN, OR);
//    static const Word Word::eq_word(EQ_TOKEN, EQ);
//    static const Word Word::ne_word(NE_TOKEN, NE);
//    static const Word Word::le_word(LE_TOKEN, LE);
//    static const Word Word::ge_word(GE_TOKEN, GE);
//    static const Word Word::minus_word(MINUS_TOKEN, MINUS);
//    static const Word Word::true_word(TRUE_TOKEN, TRUE);
//    static const Word Word::false_word(FALSE_TOKEN, FALSE);
//    static const Word Word::temp_word(TEMP_TOKEN, TEMP);

LEXER_END
MAIN_NAMESPACE_END


#endif //PARSER_WORD_H
