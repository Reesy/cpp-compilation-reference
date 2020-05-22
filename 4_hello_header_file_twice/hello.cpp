
/* hello.cpp */
#include <string>
#include "hello.hpp"

// This syntax means that the function will return an std::string type, string comes from the standard library. Hence std:: 
std::string getHelloWorld()
{
    std::basic_string hello_world = "hello_world";
    return hello_world;
}