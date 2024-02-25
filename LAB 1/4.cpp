// Write a program using a function which returns 1 if A[i]=i otherwise it returns 0. Here A
// is a 1-D array.

#include <iostream>
#include <vector>

int checkIndexEquality(std::vector<int> A, int i) {
    if (A[i] == i)
        return 1;
    else
        return 0;
}

int main() {
    std::vector<int> A = {0, 1, 2, 3, 4, 5};
    int i = 3;
    std::cout << "For index " << i << ", A[i] == i is " << (checkIndexEquality(A, i) ? "true" : "false");
    return 0;
}
