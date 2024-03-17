#pragma once

#include <cstdint>
#include <string>
#include <iostream>

class Node {
public:
    Node() = default;
    Node(std::string key, int value);
    ~Node() = default;
    void print();

    std::string key{""};
    int value{0};
    Node* next{nullptr};
};
