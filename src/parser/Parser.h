//
// Created by lirz on 2017/8/24.
//

#ifndef PARSER_PARSER_H
#define PARSER_PARSER_H

#include "../lexer/Lexer.h"
#include "../lib.h"

MAIN_NAMESPACE_START
PARSER_START

    class Parser
    {
    public:
        Parser();

        explicit Parser(LexerNamespace::Lexer lex);

        explicit Parser(LexerNamespace::Lexer *lex_pointer);

        void program();
    };

PARSER_END
MAIN_NAMESPACE_END


#endif //PARSER_PARSER_H
