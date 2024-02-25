// Write a function strcat(s,t) which concatenates the string t to the end of string s.
// Call this function from main function.

#include <iostream>

void strcat(char* s, const char* t) {
    while (*s) ++s;  // Find end of s
    while (*s++ = *t++);  // Copy t to end of s
}

int main() {
    char s[100] = "Hello";
    const char* t = " World!";
    strcat(s, t);
    std::cout << "The concatenated string is: " << s << std::endl;
    return 0;
}
