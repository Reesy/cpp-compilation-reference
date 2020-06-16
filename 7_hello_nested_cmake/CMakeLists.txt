cmake_minimum_required(VERSION 3.14.4)

# set the project name
project(Nested_Parent LANGUAGES CXX)


add_library(badmathlib STATIC ../6_hello_custom_library/src/badmath.cpp 
                              ../6_hello_custom_library/include/badmath.hpp
            )

# any project created from this will have the include files added and hopefully a folder too (in xcode/visual studio)
# the PUBLIC means any projects that depend on this project must also have the include
target_include_directories(badmathlib PUBLIC ../6_hello_custom_library/include) 

add_executable(result main.cpp)

target_link_libraries(result PUBLIC badmathlib)

