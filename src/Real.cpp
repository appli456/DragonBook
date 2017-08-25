//
// Created by lirz on 2017/8/25.
//

#include "Real.h"

MAIN_NAMESPACE_START
LEXER_START
    Real::Real() = default;

    Real::Real(float v) : Token(REAL)
    {
        value.f = v;
        type = RealType::FLOAT;
    }

    Real::Real(double v) : Token(REAL)
    {
        value.d = v;
        type = RealType::DOUBLE;
    }

    string Real::to_string() const
    {
        if (type == RealType::FLOAT)
        {
            return std::to_string(value.f);
        }

        if (type == RealType::DOUBLE)
        {
            return std::to_string(value.d);
        }

        return "";
    }
LEXER_END
MAIN_NAMESPACE_END
