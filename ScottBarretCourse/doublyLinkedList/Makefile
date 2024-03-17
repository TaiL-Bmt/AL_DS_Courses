CC=g++ -std=c++20 -Wall

all: main.o node.o doublyLinkedList.o
	$(CC) -o a.out main.o node.o doublyLinkedList.o

main.o: main.cpp
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp

doublyLinkedList.o: doublyLinkedList.cpp doublyLinkedList.cpp
	$(CC) -c doublyLinkedList.cpp

clean:
	rm -rf *.o *.out
