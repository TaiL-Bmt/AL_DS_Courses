CC=g++ -std=c++20 -Wall

all: main.o node.o stack.o
	$(CC) -o a.out main.o node.o stack.o

main.o: main.cpp
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp

stack.o: stack.cpp stack.h
	$(CC) -c stack.cpp

clean:
	rm -rf *.o *.out
