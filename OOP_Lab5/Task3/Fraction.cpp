#include "Fraction.h"
#include <stdexcept> 

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0)
        throw invalid_argument("Denominator cannot be zero.");

}

Fraction::~Fraction() {}


Fraction Fraction::operator+(const Fraction& other) const {
    return Fraction(numerator * other.denominator + other.numerator * denominator,
        denominator * other.denominator);
}

Fraction Fraction::operator-(const Fraction& other) const {
    return Fraction(numerator * other.denominator - other.numerator * denominator,
        denominator * other.denominator);
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(numerator * other.numerator, denominator * other.denominator);
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.numerator == 0)
        throw invalid_argument("Cannot divide by zero fraction.");
    return Fraction(numerator * other.denominator, denominator * other.numerator);
}

bool Fraction::operator==(const Fraction& other) const {
    return numerator == other.numerator && denominator == other.denominator;
}

bool Fraction::operator!=(const Fraction& other) const {
    return !(*this == other);
}

ostream& operator<<(ostream& os, const Fraction& frac) {
    os << frac.numerator << '/' << frac.denominator;
    return os;
}
