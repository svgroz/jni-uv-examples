cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(hello-uv)

set_target_properties(${TARGET} PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

add_executable(app src/hello.cpp)
target_link_libraries(app uv)