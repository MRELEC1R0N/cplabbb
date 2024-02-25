// Define a class to represent a bank account, including the following data members:
//  Name of the depositor
//  Account number
//  Type of account
//  Balance amount in the account
// And member functions:
//  To assign initial values
//  To deposit an amount
//  To withdraw an amount after checking the balance
//  To display the name and balance
// Write a main program to test the program.

#include<iostream>
#include<string>

class BankAccount {
    std::string depositor_name;
    std::string account_number;
    std::string account_type;
    double balance;

public:
    BankAccount(std::string name, std::string number, std::string type, double bal) {
        depositor_name = name;
        account_number = number;
        account_type = type;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            std::cout << "Insufficient balance!" << std::endl;
        } else {
            balance -= amount;
        }
    }

    void display() {
        std::cout << "Depositor Name: " << depositor_name << ", Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account("John Doe", "123456789", "Savings", 10000);
    account.display();
    account.deposit(5000);
    account.display();
    account.withdraw(3000);
    account.display();

    return 0;
}
