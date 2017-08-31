//
// Created by lirz on 2017/8/24.
//

#include "Word.h"
MAIN_NAMESPACE_START
LEXER_START
    const Word Word::and_word = { AND_TOKEN, AND };
    const Word Word::or_word = { OR_TOKEN, OR };
    const Word Word::eq_word = { EQ_TOKEN, EQ };
    const Word Word::ne_word = { NE_TOKEN, NE };
    const Word Word::le_word = { LE_TOKEN, LE };
    const Word Word::ge_word = { GE_TOKEN, GE };
    const Word Word::minus_word = { MINUS_TOKEN, MINUS };
    const Word Word::true_word = { TRUE_TOKEN, TRUE };
    const Word Word::false_word = { FALSE_TOKEN, FALSE };
    const Word Word::temp_word = { TEMP_TOKEN, TEMP };

    Word::Word()
    {
        lexme = "";
    }

    Word::Word(Word &&w) noexcept :
            lexme(std::move(w.lexme)) {}

    Word::Word(Word &w)
            : Token(w)
    {
        lexme = w.lexme;
    }

    Word::Word(string& s, int tag)
            :Token(tag)
    {
        std::copy(s.begin(), s.end(), std::back_inserter(lexme));
    }


    Word::Word(const char *s, int tag):Token(tag)
    {
        lexme = s;
    }

    Word::~Word()
    {
        Token::~Token();
        lexme.clear();
    }

    string Word::to_string() const
    {
        return lexme;
    }

    Word& Word::operator=(const Word &w)
    {
        Token::operator=(w);
        lexme = w.lexme;

        return *this;
    }

    Word& Word::operator=(Word &&w) noexcept
    {
        lexme = std::move(w.lexme);
        tag = w.tag;
        return *this;
    }

LEXER_END
MAIN_NAMESPACE_END