// Write a program to calculate factorial of a number N using recursion.

#include<iostream>
using namespace std;

long long factorial(int N) {
    if(N == 0)
        return 1;
    else
        return N * factorial(N - 1);
}

int main() {
    int number = 5;
    cout << "Factorial of " << number << " = " << factorial(number);
    return 0;
}
