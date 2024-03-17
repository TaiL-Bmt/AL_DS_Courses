#pragma once

#include <cstdint>
#include "node.h"

class Queue {
private:
    Node* first {nullptr};
    Node* last{nullptr};
    int length {0};

public:
    Queue() = default;
    Queue(int32_t val);
    void print();
    void enqueue(int32_t val);
    int dequeue();
};

