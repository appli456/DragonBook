//
// Created by lirz on 2017/8/25.
//

#ifndef PARSER_TYPE_H
#define PARSER_TYPE_H

#include <string>

#include "./../lib/lib.h"
#include "./Word.h"
#include "./../lib/tag.h"
#include "./../lib/size.h"

using std::string;
MAIN_NAMESPACE_START
SYMBOL_START
class Type : public LexerNamespace::Word
{
public:
    int width; // For allocate memory
    Type();
    Type(const char* s, int tag, int w);
    Type(string& s, int tag, int w);

    static bool numeric(Type& t);
    static Type max (Type& t1, Type& t2);


    bool operator==(Type t);


    static const Type Int, Float, Char, Bool;

};
SYMBOL_END
MAIN_NAMESPACE_END

#endif //PARSER_TYPE_H
