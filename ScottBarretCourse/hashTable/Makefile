CC=g++ -std=c++20 -Wall

all: main.o node.o hashTable.o
	$(CC) -o a main.o node.o hashTable.o

main.o: main.cpp
	$(CC) -c main.cpp

node.o: node.cpp
	$(CC) -c node.cpp

hashTable.o: hashTable.cpp
	$(CC) -c hashTable.cpp

