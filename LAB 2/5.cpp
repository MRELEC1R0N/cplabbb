// Write a program to perform the addition of two complex numbers using structures.

#include <iostream>

struct Complex {
    double real;
    double imag;
};

Complex addComplexNumbers(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex c1 = {1.0, 2.0};  // Complex number: 1 + 2i
    Complex c2 = {3.0, 4.0};  // Complex number: 3 + 4i

    Complex result = addComplexNumbers(c1, c2);

    std::cout << "The result of the addition is: " << result.real << " + " << result.imag << "i" << std::endl;

    return 0;
}
