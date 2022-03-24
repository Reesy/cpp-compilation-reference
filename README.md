# cpp_compilation
A repository where I have multiple project examples of increasing difficulty and use of compiler tools like cmake/make.

This is a reference project of C++ compilation techniques, going from the very basics with manual compilation to build tools like make and CMAKE, to compiling for the the web through WASM with emscripten. 

| Folder    | Description   |
| --------- | ------------- |
| [g++ hello world](/1_hello_world) | The most basic compilation example, a program that prints hello world compiled using g++         |
| [g++ hello world with multiple files](/2_hello_multiple_files) | Two file example, the function exists in ```hello.cpp``` but is forward declard in ```main.cpp``` |
| [g++ hello world with headers](/3_hello_header_file) | Mutliple file example but with the function declaration in a header file           |
| [g++ hello world with makefile](/4_hello_makefile) | Multiple file project example with a few make commands |
| [CMake project example (platform agnostic) ](/5_hello_cmake) | Project example for multiple platforms using cmake |
| [Custom library example](6_hello_custom_library) | An example that just compiles a library project with make and a small test implementation     |
| [Building for the web (emscripten)](8_hello_emscripten) | An example that builds to WASM (through CLI)    |      
