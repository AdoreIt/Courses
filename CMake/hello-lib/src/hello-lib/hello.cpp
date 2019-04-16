#include "hello.hpp"
#include <iostream>

void Hello::helloCmake()
{
    std::cout << "Hello CMake! from hello-lib version " << HELLO_CMAKE_VERSION
              << '\n';
}