// Write the function strend(s,t), which returns 1 if the string t occurs at the end of the
// string s, and zero otherwise.
// Sample Test case1:
// Input:
// s=”Object Oriented Programming using C++”
// t=”Using C++”
// Output: 1
// Sample Test case2:
// Input:
// s=”Object Oriented Programming using C++”
// t=”Programming”
// Output: 0

#include <iostream>
#include <cstring>

int strend(const char* s, const char* t) {
    s += strlen(s) - strlen(t);
    while (*s++ == *t++)
        if (*s == '\0')
            return 1;
    return 0;
}

int main() {
    const char* s1 = "Object Oriented Programming using C++";
    const char* t1 = "using C++";
    std::cout << "The result for the first test case is " << strend(s1, t1) << std::endl;

    const char* s2 = "Object Oriented Programming using C++";
    const char* t2 = "Programming";
    std::cout << "The result for the second test case is " << strend(s2, t2) << std::endl;

    return 0;
}
