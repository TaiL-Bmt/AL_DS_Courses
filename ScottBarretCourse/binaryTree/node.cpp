#include <iostream>
#include "node.h"

Node::~Node()
{
    std::cout << "Delete node\n";
}

Node::Node(int32_t value)
{
    this->value = value;
    left = nullptr;
    right = nullptr;
}

int32_t Node::get()
{
    return value;
}

void Node::set(int32_t val)
{
    value = val;
}

void Node::print()
{
    std::cout << "(" << value << ") -> ";
}

