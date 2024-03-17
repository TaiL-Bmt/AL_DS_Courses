#pragma once
#include <cstdint>
#include <iostream>

class Node {
public:
    int32_t value{0};
    Node* left{nullptr};
    Node* right{nullptr};

    Node(int32_t value);
    Node() = default;
    ~Node();
    int32_t get();
    void set(int32_t val);
    void print();
};
