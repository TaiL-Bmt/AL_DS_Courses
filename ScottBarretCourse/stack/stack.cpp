#include <iostream>
#include "stack.h"

Stack::Stack(int val)
{
    Node* newNode = new Node(val);
    top = newNode;
    height = 1;
}

void Stack::print()
{
    Node* tmp {top};
    std::cout << "Stack is: ";
    while (tmp) {
        tmp->print();
        std::cout << " -> ";
        tmp = tmp->next;
    }
    std::cout << "\n";
}

void Stack::getTop()
{
    std::cout << "Top: " << top->value << std::endl;
}

void Stack::getHeight()
{
    std::cout << "Height is: " << height << std::endl;
}

void Stack::push(int32_t val)
{
    Node* newNode = new Node(val);
    if (height == 0) {
        top = newNode;
    } else {
        newNode->next = top;
        top = newNode;
    }
    height++;
}

int32_t Stack::pop()
{
    if (height == 0) {
        std::cout << "Nothing to return\n";
        return -1;
    }

    int32_t ret = top->value;
    Node* tmp {top};
    top = top->next;
    delete tmp;
    height--;

    return ret;
}
