
#### Compile an application that uses multiple files using a makefile
	make all


Makefile commands:\
```make all```  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; This will build the entire application, both the hello file.o and main.o files and then link them into the final 'hello_world' application \<file>\
```make hello.o```  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; This will build the object file of hello.cpp\<file>\
```make main.o```   &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; This will build the object file of main.cpp \<file>\
```make clean```    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; This will get rid of the object files and the hello_world executable from the directory\<file>

Used compiler flags:

```-o <file> ```  &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Place the output into \<file>


Video that helped me understand makefiles: https://www.youtube.com/watch?v=GExnnTaBELk 