//
// 词法分析器
//

#ifndef PARSER_LEXER_H
#define PARSER_LEXER_H

#include "../lib/lib.h"
#include "./Word.h"
#include "./Token.h"
#include <unordered_map>

MAIN_NAMESPACE_START
LEXER_START
    class Lexer {
    public:
        static int line;

        Lexer();
        Token* scan();
    private:
        char peek = ' ';
        void reserve(Word& w);
        void read_char();
        bool read_char(char c);
    };
LEXER_END
MAIN_NAMESPACE_END



#endif //PARSER_LEXER_H
