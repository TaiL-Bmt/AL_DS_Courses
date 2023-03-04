#pragma once
typedef struct {
    int val;
    int val2;
} Data_t;

class Node {
public:
    Node(Data_t value);
    ~Node();
    void printNode();
    bool set(Data_t data);


    Node* next;
    Data_t value;

private:
};
