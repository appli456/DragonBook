//
// lexer constant
//

#ifndef PARSER_TAG_H
#define PARSER_TAG_H

#include "lib.h"

MAIN_NAMESPACE_START
LEXER_START

    const int AND{ 256 }; // Logic token -> and
    const int BASIC{ 257 };
    const int BREAK { 258 };
    const int DO { 259 };
    const int ELSE { 260 };
    const int EQ { 261 }; // Logic token -> equal
    const int FALSE { 262 };
    const int GE { 263 }; // Logic token -> greater then or equal
    const int ID { 264 };
    const int IF { 265 };
    const int INDEX { 266 };
    const int LE { 267 }; // Logic token -> less than or equal
    const int MINUS { 268 };
    const int NE { 269 }; // Logic token -> not equal
    const int NUM { 270 }; // Logic token -> number
    const int OR { 271 }; // Logic token -> or
    const int REAL { 272 };
    const int TEMP { 273 };
    const int TRUE { 274 };
    const int WHILE { 275 };

LEXER_END
MAIN_NAMESPACE_END

#endif //PARSER_TAG_H
