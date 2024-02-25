// Write a function which takes a string as input from user and returns the length of that
// string without using any string library functions. Call this function from main function.

#include <iostream>

int stringLength(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    std::cout << "The length of the string is " << stringLength(str) << std::endl;
    return 0;
}
