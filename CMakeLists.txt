cmake_minimum_required(VERSION 3.8)
project(Parser)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Lexer.cpp Lexer.h Parser.cpp Parser.h tag.h lib.h Token.cpp Token.h Num.cpp Num.h Word.cpp Word.h)
add_executable(Parser ${SOURCE_FILES})