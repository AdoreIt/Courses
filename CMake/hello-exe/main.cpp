#include <iostream>

#include <hello-lib/hello.hpp>

int main()
{
    Hello::helloCmake();
    std::cout << "Hello from main with hello-lib version "
              << HELLO_CMAKE_VERSION << '\n';
    return 0;
}