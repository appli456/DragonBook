//
// Float or Double
//

#ifndef PARSER_REAL_H
#define PARSER_REAL_H

#include "./../lib/lib.h"
#include "Token.h"
#include "./../lib/tag.h"
#include <string>

using std::string;

MAIN_NAMESPACE_START
LEXER_START
    enum class RealType {
        FLOAT,
        DOUBLE,
    };

    typedef union {
        float f;
        double d;
    } RealValue;



    class Real : public Token{
    public:
        Real();
        explicit Real(float v);
        explicit Real(double v);
        string to_string() const;

    private:
        RealValue value;
        RealType type;
    };

LEXER_END
MAIN_NAMESPACE_END


#endif //PARSER_REAL_H
