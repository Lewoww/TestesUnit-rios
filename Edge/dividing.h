#ifndef DIVIDING_H
#define DIVIDING_H

class dividing {
private:
    int x; // Numerador
    int y; // Denominador

public:
    dividing(int numerator = 0, int denominator = 1);

    dividing operator+(const dividing& other) const;
    dividing operator*(const dividing& other) const;

    int get_numerator() const;
    int get_denominator() const;
};

#endif
