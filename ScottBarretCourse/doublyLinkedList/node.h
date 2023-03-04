#pragma once

#include <cstdint>

class Node {
public:
    int32_t value {0};
    Node* next;
    Node* prev;

public:
    Node() = delete;
    Node(int val);
    int32_t get();
    void set(int val);
    void printNode();
};
