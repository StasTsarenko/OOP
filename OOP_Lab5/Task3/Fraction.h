#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;   
    int denominator; 

public:

    Fraction(int num = 1, int denom = 2);

    ~Fraction();

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    bool operator==(const Fraction& other) const;
    bool operator!=(const Fraction& other) const;

    friend ostream& operator<<(ostream& os, const Fraction& frac);
};

#endif // FRACTION_H
