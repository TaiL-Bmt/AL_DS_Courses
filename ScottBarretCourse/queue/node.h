#pragma once

class Node {
public:
    Node(int value);
    ~Node();
    void print();
    bool set(int data);

    Node* next;
    int value;

private:
};
