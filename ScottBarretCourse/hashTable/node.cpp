#include "node.h"

Node::Node(std::string key, int value)
{
    this->key = key;
    this->value = value;
    next = nullptr;
}

void Node::print()
{
    std::cout << "{" <<  key << ", " << value <<  "} -> ";
}

