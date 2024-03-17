#include <iostream>
#include "node.h"

Node::Node(int val)
{
    value = val;
    next = nullptr;
    prev = nullptr;
}

int32_t Node::get()
{
    return value;
}

void Node::set(int val)
{
    value = val;
}

void Node::printNode()
{
    std::cout << value;
}

