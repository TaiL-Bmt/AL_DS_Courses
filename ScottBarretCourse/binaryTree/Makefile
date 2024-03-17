CC=g++ -std=c++20 -Wall

all: main.o node.o bst.o
	$(CC) -o a.out main.o node.o bst.o

main.o: main.cpp
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp

bst.o: bst.cpp bst.h
	$(CC) -c bst.cpp

clean:
	rm -rf *.o *.out
