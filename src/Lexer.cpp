//
// Created by lirz on 2017/8/24.
//

#include "Lexer.h"
#include "../lib/lib.h"

MAIN_NAMESPACE_START

LEXER_START
    int Lexer::line = 1;

    Lexer::Lexer()
    {
        reserve((new Word("if", IF)));
        reserve((new Word("else", ELSE)));
        reserve((new Word("while", WHILE)));
        reserve((new Word("do", DO)));
        reserve((new Word("break", BREAK)));
        reserve(Word::true_word);
        reserve(Word::false_word);
        reserve(SymbolNamespace::Type::Int);
        reserve(SymbolNamespace::Type::Float);
        reserve(SymbolNamespace::Type::Bool);
        reserve(SymbolNamespace::Type::Char);
    }

    const Token* Lexer::scan() {
        for (; ;read_char()) {
            if (peak == ' ' || peak == '\t') {
                continue;
            }

            if (peak == '\n') {
                line = line + 1;
            }
            else {
                break;
            }
        }

        switch (peak) {
            case '&':
                if (read_char('&')) {
                    return Word::and_word;
                } else {
                    return new Token('&');
                }
            case '|':
                if (read_char('|')) {
                    return Word::or_word;
                } else {
                    return new Token('|');
                }
            case '=':
                if (read_char('=')) {
                    return Word::eq_word;
                } else {
                    return new Token('=');
                }
            case '!':
                if (read_char('=')) {
                    return Word::ne_word;
                } else {
                    return new Token('!');
                }
            case '<':
                if (read_char('=')) {
                    return Word::le_word;
                } else {
                    return new Token('<');
                }

            case '>':
                if (read_char('=')) {
                    return Word::ge_word;
                } else {
                    return new Token('=');
                }

        }

        return _resolve();
    }

    const Token* Lexer::_resolve() {
        if (isdigit(peak) != 0) {
            int _v = 0;
            do {
                _v = 10 * _v + (peak - '0');
                read_char();
            } while(isdigit(peak) != 0);

            if (peak != '.') {
                return new Num(_v);
            }

            double _x = _v;
            double d = 10;

            for( ;isdigit(peak) != 0; read_char()) {
                _x = _x + (peak - '0') / d;
                d = d * 10;
            }

            return new Real(_x);

        }

        if (isalpha(peak) != 0) {
            string str;
            do {
                str += peak;
                read_char();
            } while (isdigit(peak) != 0 || isalpha(peak) != 0);

            auto word_pointer = words.find(str);
            if (word_pointer != words.end()) {
                return words[str];
            }

            const Word* word = new Word(str, ID);
            words[str] = word;
            return word;
        }

        const Token* tkn = new Token(peak);
        peak = ' ';
        return tkn;
    }

    void Lexer::reserve(const Word* w)
    {
        words[w->lexme] = w;
        delete w;
    }

    bool Lexer::read_char(char c)
    {
        read_char();
        if (peak != c) {
            return false;
        }

        peak = ' ';
        return true;
    }

    void Lexer::read_char()
    {
        peak = static_cast<char>(getchar());
    }


LEXER_END

MAIN_NAMESPACE_END