add_executable(hello_cmake main.cpp)

target_link_libraries(hello_cmake PRIVATE hello-lib)