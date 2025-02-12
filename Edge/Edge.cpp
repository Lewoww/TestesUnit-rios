#include "Edge.h"

Edge::Edge(const Vertex& start, const Vertex& end) : v1(start), v2(end) {}

const Vertex& Edge::get_start() const { return v1; }
const Vertex& Edge::get_end() const { return v2; }
