#include <iostream>
#include "dividing.h"
#include "Vertex.h"
#include "Edge.h"

int main() {
    // Teste da classe dividing
    dividing d1(1, 2), d2(3, 4);
    dividing soma = d1 + d2;
    dividing produto = d1 * d2;

    std::cout << "dividing 1: " << d1.get_numerator() << "/" << d1.get_denominator() << "\n";
    std::cout << "dividing 2: " << d2.get_numerator() << "/" << d2.get_denominator() << "\n";
    std::cout << "Soma: " << soma.get_numerator() << "/" << soma.get_denominator() << "\n";
    std::cout << "Produto: " << produto.get_numerator() << "/" << produto.get_denominator() << "\n";

    // Teste da classe Vertex
    Vertex v1(1.0, 2.0), v2(3.0, 4.0);
    std::cout << "Vértice 1: (" << v1.get_x() << ", " << v1.get_y() << ")\n";
    std::cout << "Vértice 2: (" << v2.get_x() << ", " << v2.get_y() << ")\n";

    // Teste da classe Edge
    Edge e(v1, v2);
    std::cout << "Aresta entre (" << e.get_start().get_x() << ", " << e.get_start().get_y()
        << ") e (" << e.get_end().get_x() << ", " << e.get_end().get_y() << ")\n";

    return 0;
}
