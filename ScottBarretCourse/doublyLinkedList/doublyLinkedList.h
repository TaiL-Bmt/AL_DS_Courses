#pragma once

#include "node.h"

class DoublyLinkedList {
public:
    DoublyLinkedList() = delete;
    DoublyLinkedList(int val);
    void printList();
    void getHead();
    void getTail();
    void getLength();
    void append(int val);
    void deleteLast();
    void prepend(int val);
    void deleteFirst();
    Node* get(int32_t index);
    void set(int32_t index, int32_t val);
    void insert(int32_t index, int32_t val);
    void deleteNode(int32_t index);

private:
    Node *head {nullptr};
    Node *tail {nullptr}; 
    int32_t length{0};

};
