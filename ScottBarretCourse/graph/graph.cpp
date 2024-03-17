#include "graph.h"

void Graph::print()
{
    for (auto [vertex, edges] : adjList) {
        std::cout << vertex << ": [";
        for (auto edge : edges) {
            std::cout << edge << ", ";
        }
        std::cout << "]" << std::endl;
    }
}

bool Graph::addVertex(std::string vertex)
{
    if (adjList.count(vertex) == 0) {
        adjList[vertex];
        return true;
    }
    return false;
}

bool Graph::addEdge(const std::string& vertex1, const std::string& vertex2)
{
    if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
        adjList.at(vertex1).insert(vertex2);
        adjList.at(vertex2).insert(vertex1);
        return true;
    }
    return false;
}

bool Graph::removeEdge(const std::string& vertex1, const std::string& vertex2)
{
    if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
        adjList.at(vertex1).erase(vertex2);
        adjList.at(vertex2).erase(vertex1);
        return true;
    }
    return false;
}

bool Graph::removeVertex(const std::string& vertex)
{
    if (adjList.count(vertex) == 0) {
        return false;
    }
    for (auto v : adjList.at(vertex)) {
        adjList.at(v).erase(vertex);
    }
    adjList.erase(vertex);

    return true;
}
