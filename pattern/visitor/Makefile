
C_OPTIONS = -std=c++11 -g

.PHONY: all clean

all: bin/visitor

bin:
	mkdir -p bin

bin/visitor: bin bin/Visitor.o
	g++ bin/Visitor.o -o bin/visitor

bin/Visitor.o:
	g++ -c Visitor.cpp $(C_OPTIONS) -o bin/Visitor.o

clean:
	rm -rf bin
