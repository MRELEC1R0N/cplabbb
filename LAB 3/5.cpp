// Write a function that accepts two arguments: a string name of a movie and an integer running
// time in minutes. Provide a default value for the minutes so that if you call the function without
// an integer argument, the minutes default to 90. Write a main () function that proves that you
// can call the function with a string argument alone as well as with a string and an integer.

#include <iostream>
#include <string>

void displayMovieInfo(const std::string& movieName, int runningTime = 90) {
    std::cout << "Movie: " << movieName << ", Running Time: " << runningTime << " minutes" << std::endl;
}

int main() {
    displayMovieInfo("Inception");  // Call the function with a string argument alone
    displayMovieInfo("Interstellar", 169);  // Call the function with a string and an integer
    return 0;
}
