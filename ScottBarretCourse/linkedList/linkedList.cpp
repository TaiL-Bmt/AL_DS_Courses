#include <iostream>

#include "linkedList.h"

LinkedList::LinkedList(Data_t value)
{
    Node* newNode = new Node(value);
    head = newNode;
    tail = newNode;
    length = 1;
}

LinkedList::~LinkedList()
{
    Node* temp = head;
    while (head) {
        temp = head;
        head = head->next;
        delete temp;
        length--;
    }
    tail = nullptr;
    head = nullptr;
}

void LinkedList::printList()
{
    if (length == 0) {
        std::cout << "List is empty, nothing to print\n";
        return;
    }
    Node* temp = head;
    std::cout << "List: ";
    while (temp) {
        temp->printNode();
        std::cout << " -> ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

Data_t LinkedList::getHead()
{
    if (length == 0) return {0,0};
    std::cout << "Head is: ";
    head->printNode();
    std::cout << std::endl;

    return head->value;
}

Data_t LinkedList::getTail()
{
    if (length == 0) return {0,0};
    std::cout << "Tail is: ";
    tail->printNode();
    std::cout << std::endl;

    return tail->value;
}

int LinkedList::getLength()
{
    std::cout << "Lenghth is " << length << std::endl;
    return length;
}

void LinkedList::append(Data_t value)
{
    Node *newNode = new Node(value);

    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

void LinkedList::preend(Data_t value)
{
    Node *newNode = new Node(value);

    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    length++;
}

void LinkedList::deleteLast()
{
    if (length == 0) {
        std::cout << "List is empty, nothing to delete\n";
    } else if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
        length--;
    } else {
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = nullptr;
        length--;
    }
}

void LinkedList::deleteFirst()
{
    if (length == 0) {
        std::cout << "List is empty, nothing to delete\n";
    } else if (head == tail) {
        delete head;
        head = nullptr;
        tail = nullptr;
        length--;
    } else {
        Node* temp = head;
        head = head->next;
        delete temp;
        length--;
    }
}

Node* LinkedList::get(int index)
{
    if (index < 0 || index >= length) {
        return nullptr;
    }
    Node* tmp = head;
    while (index > 0) {
        tmp = tmp->next;
        index--;
    }

    return tmp;
}

bool LinkedList::set(int index, Data_t data)
{
    Node* tmp = get(index);
    if (tmp == nullptr) {
        return false;
    }
    tmp->set(data);

    return true;
}

bool LinkedList::insert(int index, Data_t data)
{
    if (index < 0 || index > length) {
        std::cout << "Invalid index" << index << std::endl;;
        return false;
    }
    if (index == 0) {
        preend(data);
        return true;
    }
    if (index == length) {
        append(data);
        return true;
    }

    Node* tmp {head};
    while (index > 1) {
        tmp = tmp->next;
        index--;
    }

    Node* newNode = new Node(data);
    newNode->next = tmp->next;
    tmp->next = newNode;
    length++;

    return true;
}

bool LinkedList::deleteNode(int index)
{
    if (index < 0 || index > length) {
        std::cout << "Invalid index" << index << std::endl;;
        return false;
    }
    if (index == 0) {
        deleteFirst();
        return true;
    }
    if (index == length) {
        deleteLast();
        return true;
    }
    Node* tmp {head};
    while (index > 1) {
        index--;
        tmp = tmp->next;
    }
    Node* tmp2 = tmp->next;
    tmp->next = tmp2->next;
    delete tmp2;
    length--;
    return true;
}

void LinkedList::reverse()
{
    Node* cur {head};
    head = tail;
    tail = head;

    Node* before {nullptr};
    Node* after {nullptr};

    for (int i = 0; i < length; i++) {
        after = cur->next;
        cur->next = before;
        before = cur;
        cur = after;
    }
}

