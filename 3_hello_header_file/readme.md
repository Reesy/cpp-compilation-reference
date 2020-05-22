
#### Compile an application that uses multiple files with declarations in a header file.
	g++ main.cpp hello.cpp -o myapplication


Used compiler flags:

```-o <file> ```  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Place the output into \<file>

<i>You do not need to include the header file in the above command as the #include <hello.hpp> just replaces '#include <hello.hpp>' for the contents of the file it points too. </i>

The following: 
```cpp 
#include "hello.hpp"

// Main function that will run call the function from hello.cpp, now defined in hello.hpp then terminate.
int main()
{
    printHelloWorld();
    return 0;
} 
```

Becomes:

```cpp 
void printHelloWorld();

// Main function that will run call the function from hello.cpp, now defined in hello.hpp then terminate.
int main()
{
    printHelloWorld();
    return 0;
} 
```

Which looks remarkable similar to the example in 2_hello_multiple_files :)