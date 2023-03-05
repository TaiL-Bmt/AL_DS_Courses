#pragma once

#include <cstdint>
#include "node.h"

class Stack {
private:
    Node* top;
    int height;

public:
    Stack() = delete;
    Stack(int32_t val);
    void print();
    void getTop();
    void getHeight();
    void push(int32_t val);
    int32_t pop();
};

