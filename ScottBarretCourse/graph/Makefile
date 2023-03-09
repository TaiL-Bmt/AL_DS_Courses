CC=g++ -std=c++20 -Wall

all: main.o graph.o
	$(CC) -o a.out main.o graph.o

main.o: main.cpp
	$(CC) -c main.cpp

graph.o: graph.cpp graph.h
	$(CC) -c graph.cpp

clean:
	rm -rf *.o *.out
