#include <iostream>
#include "doublyLinkedList.h"

DoublyLinkedList::DoublyLinkedList(int val)
{
    Node* newNode = new Node(val);
    head = newNode;
    tail = newNode;
    length = 1;
}

void DoublyLinkedList::printList()
{
    Node* tmp {head};
    std::cout << "List: ";
    while (tmp != nullptr) {
        tmp->printNode();
        std::cout << " -> ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}

void DoublyLinkedList::getHead()
{
    if (length == 0) {
        std::cout << "Nothing to print\n";
        return;
    }
    std::cout << "Head is " << head->get() << std::endl;
}

void DoublyLinkedList::getTail()
{
    if (length == 0) {
        std::cout << "Nothing to print\n";
        return;
    }
    std::cout << "Tail is " << tail->get() << std::endl;
}

void DoublyLinkedList::getLength()
{
    std::cout << "Length is " << length << std::endl;
}

void DoublyLinkedList::append(int val)
{
    Node* newNode = new Node(val);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    length++;
}

void DoublyLinkedList::deleteLast()
{
    if (length == 0) {
        std::cout << "Nothing to delete\n";
        return;
    }
    if (length == 1) {
        delete head;
        head = nullptr;
        tail = nullptr;
        length--;
        return;
    }

    Node* tmp = tail->prev;
    delete tail;
    tail = tmp;
    tail->next = nullptr;
    length--;
}

void DoublyLinkedList::prepend(int val)
{
    Node* newNode = new Node(val);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
    length++;
}

void DoublyLinkedList::deleteFirst()
{
    if (length == 0) {
        std::cout << "Nothing to delete\n";
        return;
    }

    Node* tmp = head;
    if (length == 1) {
        head = nullptr;
        tail = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }
    delete tmp;
    length--;
}

Node* DoublyLinkedList::get(int32_t index)
{
    if (index < 0 || index >= length) {
        return nullptr;
    }
    Node* tmp {head};
    while (index > 0) {
        index--;
        tmp = tmp->next;
    }
    return tmp;
}

void DoublyLinkedList::set(int32_t index, int32_t val)
{
    Node* tmp = get(index);
    if (tmp) {
        tmp->set(val);
    }
}

void DoublyLinkedList::insert(int32_t index, int32_t val)
{
    if (index < 0 || index > length) {
        return;
    }
    if (index == 0) {
        prepend(val);
        return;
    }
    if (index == length) {
        append(val);
        return;
    }
    
    Node* before {head};
    while (index > 1) {
        before = before->next;
        index--;
    }
    Node* after {before->next};

    Node* newNode = new Node(val);
    before->next = newNode;
    newNode->prev = before;
    newNode->next = after;
    after->prev = newNode;
    length++;
}

void DoublyLinkedList::deleteNode(int32_t index)
{
    if (index < 0 || index >= length) {
        return;
    }
    if (index == 0) {
        return deleteFirst();
    }
    if (index == length - 1) {
        return deleteLast();
    }

    Node* tmp{get(index)};
    tmp->next->prev = tmp->prev;
    tmp->prev->next = tmp->next;
    delete tmp;
    length--;
}

