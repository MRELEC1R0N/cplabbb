// Create a class named Shirt that has the public data members collarsize and sleeveLength.
// Create a class named Pants that has the public data members waistSize and inSeam. Write a
// program that declares one object of each type Shirt and Pants and assigns values to the objects’
// data fields. Write two overloaded functions named displayClothingFacts(). One version of the
// function takes a Shirt object as an argument; the other version takes a Pants object. Each
// version displays the facts about the piece of clothing. Your main() function should demonstrate
// that you can call displayClothingFacts() with either type of clothing.

#include <iostream>

class Shirt {
public:
    int collarSize;
    int sleeveLength;
};

class Pants {
public:
    int waistSize;
    int inSeam;
};

void displayClothingFacts(const Shirt& shirt) {
    std::cout << "Shirt:\n";
    std::cout << "Collar Size: " << shirt.collarSize << "\n";
    std::cout << "Sleeve Length: " << shirt.sleeveLength << "\n";
}

void displayClothingFacts(const Pants& pants) {
    std::cout << "Pants:\n";
    std::cout << "Waist Size: " << pants.waistSize << "\n";
    std::cout << "Inseam: " << pants.inSeam << "\n";
}

int main() {
    Shirt myShirt;
    myShirt.collarSize = 15;
    myShirt.sleeveLength = 34;

    Pants myPants;
    myPants.waistSize = 32;
    myPants.inSeam = 34;

    displayClothingFacts(myShirt);
    displayClothingFacts(myPants);

    return 0;
}
