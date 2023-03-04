#include <iostream>
#include "doublyLinkedList.h"

int main()
{
    std::cout << "Hello world\n";
    DoublyLinkedList *dll = new DoublyLinkedList(3);
    dll->printList();
    dll->getHead();
    dll->getTail();
    dll->getLength();

    dll->append(4);
    dll->append(5);

    dll->printList();
    dll->getLength();

    std::cout << "test insert\n";
    dll->insert(0, -1);
    std::cout << "test insert 1\n";
    dll->printList();
    dll->getLength();
    dll->insert(2, 11);
    dll->printList();
    dll->getLength();
    std::cout << "test insert\n";
    dll->insert(5, 15);
    std::cout << "test insert 3\n";
    dll->printList();
    dll->getLength();
    std::cout << "test delete\n";
    dll->deleteNode(0);
    dll->printList();
    dll->deleteNode(2);
    dll->printList();
    dll->getLength();
    dll->deleteNode(3);
    dll->printList();

    return 0;
}
