cmake_minimum_required(VERSION 3.14.4)

# set the project name
project(nested_library LANGUAGES CXX)

add_library(badmathlib STATIC ./src/badmath.cpp 
                              ./include/badmath.hpp
            )

# any project created from this will have the include files added and hopefully a folder too (in xcode/visual studio)
# the PUBLIC means any projects that depend on this project must also have the include
target_include_directories(badmathlib PUBLIC include) 
