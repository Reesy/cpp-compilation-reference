all: main.o hello.o
	g++ main.o hello.o -o hello_world

main.o: main.cpp hello.hpp
	g++ -c main.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

clean:
	rm *.o hello_world