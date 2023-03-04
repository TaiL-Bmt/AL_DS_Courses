#pragma once

#include "node.h"

class LinkedList {
public:
    LinkedList(Data_t value);
    ~LinkedList();
    void printList();
    Data_t getHead();
    Data_t getTail();
    int getLength();
    void append(Data_t value);
    void preend(Data_t value);
    void deleteLast();
    void deleteFirst();
    Node* get(int index);
    bool set(int index, Data_t data);
    bool insert(int index, Data_t data);
    bool deleteNode(int index);
    void reverse();

private:
    Node* head;
    Node* tail;
    int length;
};
