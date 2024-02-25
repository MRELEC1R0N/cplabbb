// Write a class definition for an order class for a nightclub that contains a table number, a
// server’s name, and the number of patrons at the table. Include a private static data member for
// the table minimum charge, which is $4.75. Write a main() function that declares no object of
// order class type, but uses a static member function to display the table minimum charge.

#include <iostream>
#include <string>

class Order {
private:
    int tableNumber;
    std::string serverName;
    int numberOfPatrons;
    static double tableMinimumCharge;

public:
    static void displayMinimumCharge() {
        std::cout << "The table minimum charge is: $" << tableMinimumCharge << std::endl;
    }
};

// Initialize the static data member
double Order::tableMinimumCharge = 4.75;

int main() {
    // Display the table minimum charge using the static member function
    Order::displayMinimumCharge();
    return 0;
}
