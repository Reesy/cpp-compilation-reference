

all: badmath.o badmath.a
	
badmath.o: src/badmath.cpp include/badmath.hpp
	g++ -c src/badmath.cpp \
			-I include

badmath.a: badmath.o
	ar rvs lib/libbadmath.a badmath.o

test: all
	g++ test/test.cpp \
		-I include \
		-L ./lib -lbadmath \
		-v \
		-o testApp


.PHONY: clean 
clean:
	rm *.o testApp