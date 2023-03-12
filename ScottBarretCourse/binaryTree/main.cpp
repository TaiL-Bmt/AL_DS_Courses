#include <iostream>
#include "bst.h"

int main()
{
    std::cout << "start bst\n";
    Bst* bst = new Bst(10);
    bst->insert(5);
    bst->insert(7);
    bst->insert(6);
    bst->insert(15);
    bst->insert(13);
    bst->insert(19);
    bst->print();
    //bst->contains(6);
    //bst->contains(30);
    bst->bfs();
    return 0;
}
