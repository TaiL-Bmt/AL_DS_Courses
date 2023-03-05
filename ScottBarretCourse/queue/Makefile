CC=g++ -std=c++20 -Wall

all: main.o node.o queue.o
	$(CC) -o a.out main.o node.o queue.o

main.o: main.cpp
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp

queue.o: queue.cpp queue.h
	$(CC) -c queue.cpp

clean:
	rm -rf *.o *.out
