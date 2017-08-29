cmake_minimum_required(VERSION 3.8)
project(Parser)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/Lexer.cpp src/Lexer.h src/Parser.cpp src/Parser.h lib/tag.h lib/lib.h src/Token.cpp src/Token.h src/Num.cpp src/Num.h src/Word.cpp src/Word.h src/Real.cpp src/Real.h src/Env.cpp src/Env.h src/Type.cpp src/Type.h lib/type.h lib/size.h)
add_executable(Parser ${SOURCE_FILES})