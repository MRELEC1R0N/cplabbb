// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
// Include member functions ‘setdata()’ and ‘showdata()’ to take the input and display the output.
// Write main function to test your class. 

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int roll_no;

public:
    void setData(const std::string& n, int r) {
        name = n;
        roll_no = r;
    }

    void showData() {
        std::cout << "Name: " << name << "\n";
        std::cout << "Roll No: " << roll_no << "\n";
    }
};

int main() {
    Student student;
    student.setData("John Doe", 123);
    student.showData();
    return 0;
}
