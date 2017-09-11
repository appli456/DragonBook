//
// 词法分析器
//

#ifndef PARSER_LEXER_H
#define PARSER_LEXER_H

#include <unordered_map>
#include <string>
#include <cctype>

#include "../lib.h"
#include "../tag.h"
#include "Word.h"
#include "symbol/Type.h"
#include "Token.h"
#include "Num.h"
#include "Real.h"

using std::unordered_map;
using std::string;


MAIN_NAMESPACE_START
LEXER_START
    class Lexer {
    public:
        static int line;

        unordered_map<string, const Word*>words;
        Lexer();
        const Token* scan();

        char peak = ' ';
        void reserve(const Word* w);
        void read_char();
        bool read_char(char c);

    private:
        const Token* _resolve();
    };
LEXER_END
MAIN_NAMESPACE_END



#endif //PARSER_LEXER_H
