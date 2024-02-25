// Write a program which finds a four digit number AABB which is a perfect square. A and
// B represent different digits. For example 7744 is a four digit perfect square number which
// is also satisfying the condition AABB ie. first two digits (AA=77) are same and last two
// digits (BB=44) are same.

#include <iostream>
#include <cmath>

int find_AABB() {
    for (int i = 32; i < 100; ++i) {  // The square root of 1000 is 31.62 and the square root of 10000 is 100, so the possible squares are between 32 and 100.
        int square = i * i;
        int AA = square / 100;
        int BB = square % 100;
        if (AA / 10 == AA % 10 && BB / 10 == BB % 10 && AA / 10 != BB / 10)
            return square;
    }
    return -1;
}

int main() {
    int result = find_AABB();
    if (result != -1)
        std::cout << "The AABB number is " << result << std::endl;
    else
        std::cout << "No AABB number found" << std::endl;
    return 0;
}
