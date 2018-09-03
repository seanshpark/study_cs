
C_OPTIONS = -std=c++11 -g

.PHONY: all clean

all:
	mkdir -p bin
	g++ -c Visitor.cpp $(C_OPTIONS) -o bin/Visitor.o
	g++ bin/Visitor.o -o bin/visitor

clean:
	rm -rf bin
