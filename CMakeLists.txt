cmake_minimum_required(VERSION 3.8)
project(Parser)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/lexer/Lexer.cpp src/lexer/Lexer.h src/parser/Parser.cpp src/parser/Parser.h src/tag.h src/lib.h src/lexer/Token.cpp src/lexer/Token.h src/lexer/Num.cpp src/lexer/Num.h src/lexer/Word.cpp src/lexer/Word.h src/lexer/Real.cpp src/lexer/Real.h src/lexer/symbol/Env.cpp src/lexer/symbol/Env.h src/lexer/symbol/Type.cpp src/lexer/symbol/Type.h src/type.h src/size.h src/lexer/symbol/Array.cpp src/lexer/symbol/Array.h src/lexer/inter/Node.cpp src/lexer/inter/Node.h src/lexer/inter/Expr.cpp src/lexer/inter/Expr.h src/lexer/inter/Id.cpp src/lexer/inter/Id.h src/lexer/inter/Op.cpp src/lexer/inter/Op.h src/lexer/inter/Arith.cpp src/lexer/inter/Arith.h src/lexer/inter/Temp.cpp src/lexer/inter/Temp.h src/lexer/inter/Unary.cpp src/lexer/inter/Unary.h)
add_executable(Parser ${SOURCE_FILES})