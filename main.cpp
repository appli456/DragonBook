#include <iostream>
#include "src/Lexer.h"
#include "src/Parser.h"

using DragonParser::ParserNamespace::Parser;
using DragonParser::LexerNamespace::Lexer;

int main()
{
    auto *lex = new Lexer();
    auto *parser = new Parser(lex);
    parser->program();
    printf("%c", '\n');

    delete lex;
    delete parser;

    return 0;
}