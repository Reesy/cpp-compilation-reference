

all: badmath.o badmath.a
	
badmath.o: src/badmath.cpp include/badmath.hpp
	g++ -c src/badmath.cpp \
			-I include

badmath.a: badmath.o
	ar rvs lib/badmath.a badmath.o

test: all
	g++ test/test.cpp \
		-I include \
			lib/badmath.a -o testApp

.PHONY: clean 
clean:
	rm *.o testApp