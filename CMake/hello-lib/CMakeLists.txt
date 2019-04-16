add_library(
    hello-lib
    src/hello-lib/hello.cpp
    src/hello-lib/hello.hpp
)

target_include_directories(hello-lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")