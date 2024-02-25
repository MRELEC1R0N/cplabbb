// Write a program to compare two strings using pointer. Do not use strcmp() library
// function.

#include <iostream>

int compareStrings(const char* s1, const char* s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

int main() {
    const char* s1 = "Hello";
    const char* s2 = "Hello";
    int result = compareStrings(s1, s2);
    if (result == 0)
        std::cout << "The strings are equal." << std::endl;
    else if (result < 0)
        std::cout << "The first string is less than the second string." << std::endl;
    else
        std::cout << "The first string is greater than the second string." << std::endl;
    return 0;
}
