//
// Created by lirz on 2017/8/25.
//

#ifndef PARSER_TYPE_H
#define PARSER_TYPE_H

#include <string>
#include <utility>

#include "../../lib.h"
#include "../Word.h"
#include "../../tag.h"
#include "../../size.h"

using std::string;
MAIN_NAMESPACE_START
SYMBOL_START
class Type : public LexerNamespace::Word
{
public:
    int width; // For allocate memory
    Type();
    Type(Type& t);
    Type(Type&& t) noexcept;
    Type(const char* s, int tag, int w);
    Type(string& s, int tag, int w);
    ~Type() override;


    static bool numeric(Type& t);
    static const Type* max (Type& t1, Type& t2);


    bool operator==(Type& t);
    Type& operator=(const Type& t);
    Type& operator=(Type&& t) noexcept;

    static const Type* Int;
    static const Type* Float;
    static const Type* Char;
    static const Type* Bool;

};
SYMBOL_END
MAIN_NAMESPACE_END

#endif //PARSER_TYPE_H
