cmake_minimum_required(VERSION 3.8)

find_program(
    CLANG_TIDY_PROGRAM
    clang-tidy
    DOC "Path to clang-tidy executable"
)

set(CLANG_TIDY_COMMAND ${CLANG_TIDY_PROGRAM} -checks=* -fix -fix-errors)

add_executable(exe src/main.cpp)

set_target_properties(exe PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}"
)
