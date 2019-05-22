cmake_minimum_required(VERSION 3.1)
project(dictionayOrder)

set(CMAKE_CXX_STANDARD 17)

file (STRINGS "tests/runtests.cpp" RUNTESTS)


if(RUNTESTS MATCHES "1")
    MESSAGE(STATUS "Running tests")
    add_executable(dictionaryOrder tests/test.cpp)
elseif(RUNTESTS MATCHES "0")
    MESSAGE(STATUS "Running Source code")
    add_executable(dictionayorder src/main.cpp)


endif()
