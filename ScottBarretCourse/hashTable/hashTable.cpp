#include "hashTable.h"

void HashTable::print()
{
    for(int32_t i = 0; i < SIZE; i++) {
        std::cout << i << ":" << std::endl;
        if (dataMap[i]) {
            Node* tmp {dataMap[i]};
            while (tmp) {
                tmp->print();
                tmp = tmp->next;
            }
            std::cout << std::endl;
        }
    }
}

int HashTable::hash(std::string key)
{
    int hash{0};
    for (int i = 0; i < (int)key.length(); i++) {
        int asciiValue = int(key[i]);
        hash = (hash + asciiValue*23) % SIZE;
    }
    return hash;
}

void HashTable::set(std::string key, int value)
{
    int index {hash(key)};
    Node* newNode = new Node(key, value);
    if (dataMap[index] == nullptr) {
        dataMap[index] = newNode;
    } else {
        Node* tmp {dataMap[index]};
        while (tmp->next != nullptr) {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}

int HashTable::get(const std::string& key)
{
    int index {hash(key)};
    Node* tmp{dataMap[index]};

    while (tmp != nullptr) {
        if (tmp->key == key) {
            return tmp->value;
        }
        tmp = tmp->next;
    }
    std::cout << "cannot found\n";
    return 0;
}

std::vector<std::string> HashTable::keys()
{
    std::vector<std::string> ret;
    for (int i = 0; i < SIZE; i++) {
        Node* tmp {dataMap[i]};
        while (tmp != nullptr) {
             ret.emplace_back(tmp->key);
             tmp = tmp->next;
        }
    }
    return ret;
}
