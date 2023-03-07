#include <iostream>
#include "hashTable.h"


int main()
{
    HashTable* ht = new HashTable();
    ht->set("nails", 100);
    ht->set("tile", 50);
    ht->set("lumber", 80);
    ht->set("bolts", 200);
    ht->set("screws", 140);
    ht->print();
    std::cout << ht->get("lumber") << std::endl;
    auto keys = ht->keys();
    for (auto it : keys) {
        std::cout << it << ", ";
    }
    std::cout << "\n";

    return 0;
}
