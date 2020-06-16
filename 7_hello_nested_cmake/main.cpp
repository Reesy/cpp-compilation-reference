#include <iostream>
#include "badmath.hpp"

// Main function that will run call the function from hello.cpp, now defined in hello.hpp then terminate.
int main()
{
    
    int badMATHResult = add(10, 3);

    std::cout << "The result is: " << badMATHResult << std::endl;
    return 0;
}