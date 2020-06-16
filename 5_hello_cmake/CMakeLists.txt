cmake_minimum_required(VERSION 3.14.4)

# set the project name
project(hello_world VERSION 1.0
                    DESCRIPTION "Sample cmake project"
                    LANGUAGES CXX)

# add the executable
add_executable(hello_world main.cpp hello.cpp hello.hpp)