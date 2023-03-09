#include "graph.h"

int main()
{
    std::cout << "Hello\n";
    Graph* g = new Graph();
    g->addVertex("A");
    g->addVertex("B");
    g->addVertex("C");
    g->addEdge("A", "B");
    g->addEdge("A", "C");
    g->addEdge("B", "C");
    g->print();
    std::cout << "after removing\n";
    g->removeVertex("C");
    g->print();

    return 0;
}

