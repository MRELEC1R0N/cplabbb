// Write four overloaded function to perform addition of different types as follows: First function
// to add three integers, second to add three floats, third function to add three doubles, and fourth
// to add three long doubles. Call these functions from main function.

#include <iostream>

int add(int a, int b, int c) {
    return a + b + c;
}

float add(float a, float b, float c) {
    return a + b + c;
}

double add(double a, double b, double c) {
    return a + b + c;
}

long double add(long double a, long double b, long double c) {
    return a + b + c;
}

int main() {
    std::cout << "Addition of three integers: " << add(1, 2, 3) << std::endl;
    std::cout << "Addition of three floats: " << add(1.0f, 2.0f, 3.0f) << std::endl;
    std::cout << "Addition of three doubles: " << add(1.0, 2.0, 3.0) << std::endl;
    std::cout << "Addition of three long doubles: " << add(1.0L, 2.0L, 3.0L) << std::endl;
    return 0;
}
