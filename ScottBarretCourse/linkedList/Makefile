CC=g++ -std=c++20 -Wall

all: main.o node.o linkedList.o
	$(CC) -o a.out main.o node.o linkedList.o

main.o: main.cpp
	$(CC) -c main.cpp

node.o: node.cpp node.h
	$(CC) -c node.cpp

linkedList.o: linkedList.cpp linkedList.h
	$(CC) -c linkedList.cpp

clean:
	rm -rf *.o *.out
