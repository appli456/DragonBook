//
// Created by lirz on 2017/9/7.
//

#ifndef PARSER_NODE_H
#define PARSER_NODE_H

#include <exception>
#include <string>
#include <iostream>

#include "./../lib/lib.h"
#include "./Lexer.h"
MAIN_NAMESPACE_START
INTER_START
using std::string;
class Node {
public:
    static int labels;
    int lex_line = 0;
    Node();
    ~Node();
    void error(string err);
    int new_label();
    void emit_label(int i);
    void emit(const string& s);
};

INTER_END
MAIN_NAMESPACE_END

#endif //PARSER_NODE_H
