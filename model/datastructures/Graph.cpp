//
// Created by djnic on 08.03.2021.
//

#include "Graph.h"

void Graph::addEdge(Edge edge) {
    this->edges.push_back(edge);
}

int Graph::getSize() const {
    return size;
}

void Graph::setSize(int size) {
    Graph::size = size;
}

const std::vector<Edge> &Graph::getEdges() const {
    return edges;
}

void Graph::setEdges(const std::vector<Edge> &edges) {
    Graph::edges = edges;
}

