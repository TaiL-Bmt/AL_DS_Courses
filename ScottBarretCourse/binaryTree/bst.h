#pragma once

#include "node.h"

class Bst {
private:
    Node* root{nullptr};
    
public:
    Bst() = default;
    Bst(int32_t val);
    void print();
    void printInOrder(Node* node);
    bool insert(int32_t val);
    bool contains(int32_t val);
};
