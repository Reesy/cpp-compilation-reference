/* hello_world.cpp */
#include <iostream>
#include <emscripten.h>

using namespace std;

//Inline JS function
EM_JS(void, print_hello_world, (), {
  console.log("Hello, world!");
});

//Call a JS library function

int main()
{
    print_hello_world();
    return 0;
}