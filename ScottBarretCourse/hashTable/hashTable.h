#pragma once

#include "node.h"
#include <vector>

class HashTable {
private:
    static const int SIZE {7};
    Node* dataMap[SIZE];

public:
    void print();
    int hash(std::string key);
    void set(std::string key, int value);
    int get(const std::string& key);
    std::vector<std::string> keys();
};
