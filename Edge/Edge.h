#ifndef EDGE_H
#define EDGE_H

#include "Vertex.h"

class Edge {
private:
    Vertex v1, v2;

public:
    Edge(const Vertex& start, const Vertex& end);
    const Vertex& get_start() const;
    const Vertex& get_end() const;
};

#endif
