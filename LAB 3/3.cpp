// Create a four-function calculator for fractions. Here are the formulas for the four arithmetic
// operations applied to fractions:
// Addition: a/b + c/d = (a*d + b*c) / (b*d)
// Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
// Multiplication: a/b * c/d = (a*c) / (b*d)
// Division: a/b / c/d = (a*d) / (b*c)
// The user should type the first fraction (two values a and b), an operator, and a second fraction
// (two values c and d). The program should then display the results in fraction ie. (Numerator/
// denominator).

#include <iostream>

struct Fraction {
    int numerator;
    int denominator;
};

Fraction add(Fraction f1, Fraction f2) {
    return {f1.numerator * f2.denominator + f2.numerator * f1.denominator, f1.denominator * f2.denominator};
}

Fraction subtract(Fraction f1, Fraction f2) {
    return {f1.numerator * f2.denominator - f2.numerator * f1.denominator, f1.denominator * f2.denominator};
}

Fraction multiply(Fraction f1, Fraction f2) {
    return {f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}

Fraction divide(Fraction f1, Fraction f2) {
    return {f1.numerator * f2.denominator, f1.denominator * f2.numerator};
}

void printFraction(Fraction f) {
    std::cout << f.numerator << "/" << f.denominator << std::endl;
}

int main() {
    Fraction f1 = {1, 2};  // Fraction: 1/2
    Fraction f2 = {3, 4};  // Fraction: 3/4

    std::cout << "Addition: ";
    printFraction(add(f1, f2));

    std::cout << "Subtraction: ";
    printFraction(subtract(f1, f2));

    std::cout << "Multiplication: ";
    printFraction(multiply(f1, f2));

    std::cout << "Division: ";
    printFraction(divide(f1, f2));

    return 0;
}
