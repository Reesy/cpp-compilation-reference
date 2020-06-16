cmake_minimum_required(VERSION 3.14.4)

project(parent_application LANGUAGES CXX)

add_subdirectory(../6_hello_custom_library build)

add_executable(result main.cpp)

target_link_libraries(result PUBLIC badmathlib)
