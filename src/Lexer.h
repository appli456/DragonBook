//
// 词法分析器
//

#ifndef PARSER_LEXER_H
#define PARSER_LEXER_H

#include <unordered_map>
#include <string>

#include "../lib/lib.h"
#include "./../lib/tag.h"
#include "./Word.h"
#include "./Token.h"

using std::unordered_map;
using std::string;

MAIN_NAMESPACE_START
LEXER_START
    class Lexer {
    public:
        static int line;

        unordered_map<string, const Word*>words;
        Lexer();
        Token* scan();
    private:
        char peek = ' ';
        void reserve(const Word* w);
        void read_char();
        bool read_char(char c);
    };
LEXER_END
MAIN_NAMESPACE_END



#endif //PARSER_LEXER_H
