#pragma once

#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>

class Graph {
private:
    std::unordered_map<std::string, std::unordered_set<std::string>> adjList;

public:
    void print();
    bool addVertex(std::string vertex);
    bool addEdge(const std::string& vertex1, const std::string& vertex2);
    bool removeEdge(const std::string& vertex1, const std::string& vertex2);
    bool removeVertex(const std::string& vertex);
};
