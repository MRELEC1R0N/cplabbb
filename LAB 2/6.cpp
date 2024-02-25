// Write a C++ program to find the highest occurring digit in prime numbers in a given
// range.
// Given a range L to R, the task is to find the highest occurring digit in prime numbers lie
// between L and R (both inclusive). If multiple digits have same highest frequency print the
// largest of them. If no prime number occurs between L and R, output -1.

// Examples:
// Input : L = 1 and R = 20.
// Output : 1
// Prime number between 1 and 20 are 2, 3, 5, 7, 11, 13, 17, 19.
// 1 occur maximum i.e 5 times among 0 to 9.

#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}

void countDigits(int n, std::vector<int>& count) {
    while (n) {
        count[n % 10]++;
        n /= 10;
    }
}

int highestOccurringDigit(int L, int R) {
    std::vector<int> count(10, 0);
    for (int i = L; i <= R; i++)
        if (isPrime(i))
            countDigits(i, count);

    int maxCount = 0, digit = -1;
    for (int i = 0; i <= 9; i++)
        if (count[i] >= maxCount) {
            maxCount = count[i];
            digit = i;
        }

    return (maxCount > 0) ? digit : -1;
}

int main() {
    int L = 1, R = 20;
    std::cout << "The highest occurring digit in prime numbers between " << L << " and " << R << " is " << highestOccurringDigit(L, R) << std::endl;
    return 0;
}
