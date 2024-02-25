// Given an array A of size N-1 and given that there are numbers from 1 to N with one
// element missing; Write program to find the missing number.
// Test case 1: Given array: 1 2 3 5; missing element is 4.

// Test case 2: Given array: 1 2 3 4 5 6 7 8 10; missing element is 9.

#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& A, int N) {
    int total = N * (N + 1) / 2;
    for (int i = 0; i < N - 1; ++i) {
        total -= A[i];
    }
    return total;
}

int main() {
    std::vector<int> A1 = {1, 2, 3, 5};
    std::vector<int> A2 = {1, 2, 3, 4, 5, 6, 7, 8, 10};
    std::cout << "The missing number in the first array is " << findMissingNumber(A1, 5) << std::endl;
    std::cout << "The missing number in the second array is " << findMissingNumber(A2, 10) << std::endl;
    return 0;
}
