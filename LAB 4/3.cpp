// Create two classes DM and DB which store the value of the distances. DM stores distances in
// meters and centimeters and DB in feet and inches. Write a program that can read values for the
// class objects and add one object of DM with another object of DB. Use a friend function to carry
// out the addition operation. The object that stores the results may be a DM object or DB object,
// depending on the units in which the results are required. The display should be in the format of
// feet and inches or meters and centimeters depending on the object on display

#include<iostream>

class DB;  // Forward declaration

class DM {
    int meters, centimeters;
public:
    DM(int m, int cm) : meters(m), centimeters(cm) {}
    void display() {
        std::cout << meters << " meter(s) and " << centimeters << " centimeter(s)\n";
    }
    friend DM add(DM&, DB&);
};

class DB {
    int feet, inches;
public:
    DB(int f, int i) : feet(f), inches(i) {}
    void display() {
        std::cout << feet << " foot/feet and " << inches << " inch(es)\n";
    }
    friend DM add(DM&, DB&);
};

DM add(DM& dm, DB& db) {
    // Convert everything to centimeters
    int total_cm = dm.meters * 100 + dm.centimeters + db.feet * 30.48 + db.inches * 2.54;

    // Convert back to meters and centimeters
    int meters = total_cm / 100;
    int centimeters = total_cm % 100;

    return DM(meters, centimeters);
}

int main() {
    DM dm(5, 100);
    DB db(16, 5);

    DM result = add(dm, db);
    result.display();

    return 0;
}
