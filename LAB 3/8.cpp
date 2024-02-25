// Define a class named Movie. Include private fields for the title, year, and name of the director.
// Include three public functions with the prototypes void Movie::setTitle(char *); , void
// Movie::setYear(int); and void Movie::setDirector(char *);. Include another function that
// displays all the information about a Movie. Write a main() function that declares a movie
// object named myFavoriteMovie. Set and display the object’s fields.

#include <iostream>
#include <string>

class Movie {
private:
    std::string title;
    int year;
    std::string director;

public:
    void setTitle(const std::string& t) {
        title = t;
    }

    void setYear(int y) {
        year = y;
    }

    void setDirector(const std::string& d) {
        director = d;
    }

    void displayInfo() {
        std::cout << "Title: " << title << "\n";
        std::cout << "Year: " << year << "\n";
        std::cout << "Director: " << director << "\n";
    }
};

int main() {
    Movie myFavoriteMovie;
    myFavoriteMovie.setTitle("Inception");
    myFavoriteMovie.setYear(2010);
    myFavoriteMovie.setDirector("Christopher Nolan");
    myFavoriteMovie.displayInfo();
    return 0;
}
