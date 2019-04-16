add_library(
    hello-lib
    src/hello-lib/hello.cpp
    src/hello-lib/hello.hpp
)

target_include_directories(hello-lib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# with PRIVATE only lib will know about HELLO_CMAKE_VERSION
# with INTERFACE only consumer of a lib will know about HELLO_CMAKE_VERSION
# with PUBLIC both lib and consumer will know about HELLO_CMAKE_VERSION
target_compile_definitions(hello-lib PUBLIC HELLO_CMAKE_VERSION=1)  