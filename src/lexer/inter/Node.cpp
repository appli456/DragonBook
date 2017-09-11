//
// Created by lirz on 2017/9/7.
//

#include "Node.h"

MAIN_NAMESPACE_START

INTER_START
    int Node::labels = 1;

    Node::Node() {
        lex_line = LexerNamespace::Lexer::line;
    }

    Node::~Node() {}

    void Node::error(string err) {
        throw std::logic_error("Near line " + lex_line + err);
    }

    int Node::new_label() {
        return ++labels;
    }

    void Node::emit_label(int i) {
        std::cout << 'L' << i << ':' << std::endl;
    }

    void Node::emit(const string& s) {
        std::cout << '\t' << s << std::endl;
    }
INTER_END

MAIN_NAMESPACE_END