#include <iostream>
#include "linkedList.h"

int main()
{
    std::cout << "Hello world\n";
    Data_t value = {1, 2};
    LinkedList* myLinkedList = new LinkedList(value);
    myLinkedList->deleteLast();
    myLinkedList->printList();
    myLinkedList->getLength();
    myLinkedList->reverse();
    myLinkedList->printList();
    myLinkedList->getLength();
    
    return 0;
}
