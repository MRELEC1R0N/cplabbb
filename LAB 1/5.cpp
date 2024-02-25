//  Write a program to round off an integer “i” to the next largest multiple of another integer
// “j”. Take the values of i and j from user. For example, if i=256 and j=7 then you will get
// 259.

#include <iostream>

int roundOff(int i, int j) {
    if (i % j == 0)
        return i;
    else
        return ((i / j) + 1) * j;
}

int main() {
    int i, j;
    std::cout << "Enter the value of i: ";
    std::cin >> i;
    std::cout << "Enter the value of j: ";
    std::cin >> j;
    std::cout << "The next largest multiple of " << j << " after " << i << " is " << roundOff(i, j);
    return 0;
}
