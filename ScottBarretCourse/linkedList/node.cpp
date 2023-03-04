#include <iostream>
#include "node.h"

Node::Node(Data_t value)
{
    this->value = value;
    this->next = nullptr;
}

Node::~Node()
{
    std::cout << "Delete node\n";
}

void Node::printNode()
{
    std::cout << "(" << value.val << ", " << value.val2 << ")";
}

bool Node::set(Data_t data)
{
    value.val = data.val;
    value.val2 = data.val2;

    return true;
}
