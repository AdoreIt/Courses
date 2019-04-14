cmake_minimum_required(VERSION 3.10)

add_library(
    hello_lib
    hello.cpp
    hello.hpp
)

add_executable(hello_cmake main.cpp)

target_link_libraries(hello_cmake hello_lib)