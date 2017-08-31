//
// Created by lirz on 2017/8/25.
//

#include "Type.h"

MAIN_NAMESPACE_START
SYMBOL_START

    const Type Type::Int =
            { INT_TOKEN, LexerNamespace::BASIC, INT_SIZE};
    const Type Type::Float =
            { FLOAT_TOKEN, LexerNamespace::BASIC, FLOAT_SIZE };
    const Type Type::Char =
            { CHAR_TOKEN, LexerNamespace::BASIC, CHAR_SIZE };
    const Type Type::Bool =
            { BOOL_TOKEN, LexerNamespace::BASIC, BOOL_SIZE };

    Type::Type()
    {
        width = 0;
    }

    Type::Type(string &s, int tag, int w)
            :LexerNamespace::Word(s, tag)
    {
        width = w;
    }

    Type::Type(const char *s, int tag, int w)
        :LexerNamespace::Word(s, tag)
    {
        width = w;
    }

    Type::Type(Type &t) : LexerNamespace::Word(t)
    {
        width = t.width;
    }

    Type::Type(Type &&t) noexcept :
            LexerNamespace::Word(std::forward<Type>(t))
    {
        width = t.width;
    }

    Type::~Type()
    {
        LexerNamespace::Word::~Word();

    }

    /**
     *
     * @param t
     * @return
     */
    bool Type::numeric(Type& t)
    {
        return (t == Type::Int) ||
                (t == Type::Float) ||
                (t == Type::Char);
    }

    /**
     *
     * @param t1
     * @param t2
     * @return
     */
    Type Type::max(Type& t1, Type& t2)
    {
        if (!numeric(t1) || !numeric(t2))
        {
            return nullptr;
        }
        else if (t1 == Type::Float || t2 == Type::Float)
        {
            return Type::Float;
        }
        else if (t1 == Type::Int || t2 == Type::Int)
        {
            return Type::Int;
        }

        return Type::Char;
    }

    /**
     *
     * @param t
     * @return
     */
    bool Type::operator==(Type t)
    {
        return (t.width == this->width) &&
                (t.lexme == this->lexme) &&
                (t.tag == this->tag);
    }

    Type& Type::operator=(const Type &t)
    {

    }

    Type& Type::operator=(Type &&t) noexcept
    {

    }

SYMBOL_END
MAIN_NAMESPACE_END