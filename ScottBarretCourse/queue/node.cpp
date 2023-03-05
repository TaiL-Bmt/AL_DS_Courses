#include <iostream>
#include "node.h"

Node::Node(int value)
{
    this->value = value;
    this->next = nullptr;
}

Node::~Node()
{
    std::cout << "Delete node\n";
}

void Node::print()
{
    std::cout << "(" << value << ")";
}

bool Node::set(int data)
{
    value = data;

    return true;
}
