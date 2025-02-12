#include "dividing.h"

dividing::dividing(int numerator, int denominator) : x(numerator), y(denominator) {
    if (y == 0) y = 1; // Evita divisão por zero
}

dividing dividing::operator+(const dividing& other) const {
    return dividing(x * other.y + other.x * y, y * other.y);
}

dividing dividing::operator*(const dividing& other) const {
    return dividing(x * other.x, y * other.y);
}

int dividing::get_numerator() const { return x; }
int dividing::get_denominator() const { return y; }
