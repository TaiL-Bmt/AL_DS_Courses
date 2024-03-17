#include <iostream>
#include "queue.h"

Queue::Queue(int val)
{
    Node* newNode = new Node(val);
    first = newNode;
    last = newNode;
    length = 1;
}

void Queue::print()
{
    Node* tmp{first};

    while (tmp) {
        tmp->print();
        std::cout << " -> ";
        tmp = tmp->next;
    }
    std::cout << "\n";
}

void Queue::enqueue(int32_t val)
{
    Node* newNode = new Node(val);
    if (length == 0) {
        first = newNode;
        last = newNode;
    }
    last->next = newNode;
    last = newNode;
    length++;
}

int Queue::dequeue()
{
    if (length == 0) {
        return -1;
    }

    Node* tmp{first};
    if (length == 1) {
        first = nullptr;
        last = nullptr;
    } else {
        first = first->next;
    }
    int32_t ret {tmp->value};
    delete tmp;
    length--;
    return ret;
}
