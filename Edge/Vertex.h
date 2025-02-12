#ifndef VERTEX_H
#define VERTEX_H

class Vertex {
private:
    float x, y;

public:
    Vertex(float x = 0, float y = 0);
    float get_x() const;
    float get_y() const;
};

#endif
