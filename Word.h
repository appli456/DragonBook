//
// Created by lirz on 2017/8/24.
//

#ifndef PARSER_WORD_H
#define PARSER_WORD_H

#include "lib.h"
#include "Token.h"
#include <string>
#include <algorithm>

using std::string;

MAIN_NAMESPACE_START
LEXER_START
    class Word : public Token{
    public:
        Word();
        Word(string& s, int tag);
        string to_string() const override;
    private:
        string lexme;
    };
LEXER_END
MAIN_NAMESPACE_END


#endif //PARSER_WORD_H
