
/* 
    Forward declaring the function written in the hello file.
    This would normally be done with header files which will be shown in the next example.
    If this wasn't here then the main function would have no idea what 'printHelloWorld' is.
*/
void printHelloWorld();


// Main function that will run call the function from hello.cpp then terminate.
int main()
{
    printHelloWorld();
    return 0;
}