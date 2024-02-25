// Create a class rectangle with attributes length and width. Provide member functions that
// calculate the perimeter and area of the rectangle. Provide member functions to get the values
// from users and display the values of member variables. Write a program to test the class.

#include <iostream>

class Rectangle {
    double length;
    double width;

public:
    void getValues() {
        std::cout << "Enter length: ";
        std::cin >> length;
        std::cout << "Enter width: ";
        std::cin >> width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }

    double calculateArea() {
        return length * width;
    }

    void displayValues() {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    Rectangle rect;
    rect.getValues();
    rect.displayValues();
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;
    std::cout << "Area: " << rect.calculateArea() << std::endl;
    return 0;
}
