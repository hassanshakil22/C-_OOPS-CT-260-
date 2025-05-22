#include <iostream>
#include <string>
using namespace std;

// class Student {
// public:
//     string name;
//     int roll_no;
//     int semester;
//     string section;

//     Student(string n, int r, int sem, string sec) {
//         name = n;
//         roll_no = r;
//         semester = sem;
//         section = sec;
//     }
// };

// class BankAccount {
// private:
//     double balance;
//     int transactionCount;
//     const double interestRate = 0.05;

// public:
//     BankAccount(double initialBalance = 0.0) : balance(initialBalance), transactionCount(0) {}

//     void deposit(double amount) {
//         if (amount > 0) {
//             balance += amount;
//             transactionCount++;
//             cout << "Deposit successful. New balance: " << balance << endl;
//         } else {
//             cout << "Invalid deposit amount." << endl;
//         }
//     }

//     void withdraw(double amount) {
//         if (amount > 0 && amount <= balance) {
//             balance -= amount;
//             transactionCount++;
//             cout << "Withdrawal successful. New balance: " << balance << endl;
//         } else {
//             cout << "Invalid withdrawal amount or insufficient balance." << endl;
//         }
//     }

//     void displayBalance() const {
//         cout << "Current balance: " << balance << endl;
//     }

//     void displayTransactionCount() const {
//         cout << "Number of transactions: " << transactionCount << endl;
//     }

//     void displayInterestEarned() const {
//         double interest = balance * interestRate;
//         cout << "Interest earned for this period: " << interest << endl;
//     }
// };


#include <cstring>


// class Employee {
// private:
//     char* firstname;
//     char* lastname;
//     int monthlysalary;

// public:
//     Employee(const char* first, const char* last, int salary) {
//         firstname = new char[strlen(first) + 1];
//         strcpy(firstname, first);
//         lastname = new char[strlen(last) + 1];
//         strcpy(lastname, last);
//         setMonthlySalary(salary);
//     }

//     ~Employee() {
//         delete[] firstname;
//         delete[] lastname;
//     }

//     void setFirstName(const char* first) {
//         delete[] firstname;
//         firstname = new char[strlen(first) + 1];
//         strcpy(firstname, first);
//     }

//     void setLastName(const char* last) {
//         delete[] lastname;
//         lastname = new char[strlen(last) + 1];
//         strcpy(lastname, last);
//     }

//     void setMonthlySalary(int salary) {
//         if (salary > 0) {
//             monthlysalary = salary;
//         } else {
//             monthlysalary = 0;
//         }
//     }

//     const char* getFirstName() const {
//         return firstname;
//     }

//     const char* getLastName() const {
//         return lastname;
//     }

//     int getMonthlySalary() const {
//         return monthlysalary;
//     }

//     int getYearlySalary() const {
//         return monthlysalary * 12;
//     }

//     void giveRaise(double percentage) {
//         monthlysalary += monthlysalary * (percentage / 100);
//     }
// };



#include <cstdlib>
#include <ctime>


class HittingGame {
private:
    int yourTeamPlayers;
    int enemyHits;
    int yourHits;

public:
    HittingGame() {
        srand(time(0));
        yourTeamPlayers = rand() % 10 + 1;
        enemyHits = 0;
        yourHits = 0;
    }

    void playGame() {
        for (int i = 0; i < yourTeamPlayers; ++i) {
            int yourNumber = rand() % 5 + 1;
            int enemyNumber = rand() % 5 + 1;

            if (yourNumber == enemyNumber) {
                cout << "Enemy got hit by your team!" << endl;
                yourHits++;
            } else {
                cout << "You got hit by the enemy team!" << endl;
                enemyHits++;
            }
        }
    }

    void displayResult() {
        cout << "Your team hits: " << yourHits << endl;
        cout << "Enemy team hits: " << enemyHits << endl;

        if (yourHits > enemyHits) {
            cout << "Your team won!" << endl;
        } else if (yourHits < enemyHits) {
            cout << "Enemy team won!" << endl;
        } else {
            cout << "It's a tie!" << endl;
        }
    }
};


int main() {
    HittingGame game;
    game.playGame();
    game.displayResult();





    // Employee emp1("Hassan", "Ali", 10000);


    // Employee emp2("Shakil", "Ahmed", 20000);

    // cout << "Employee 1: " << emp1.getFirstName() << " " << emp1.getLastName() << endl;
    // cout << "Yearly Salary: " << emp1.getYearlySalary() << endl;

    // cout << "Employee 2: " << emp2.getFirstName() << " " << emp2.getLastName() << endl;
    // cout << "Yearly Salary: " << emp2.getYearlySalary() << endl;

    // emp1.giveRaise(10);
    // emp2.giveRaise(10);

    // cout << "\nAfter 10% raise:\n";
    // cout << "Employee 1: " << emp1.getFirstName() << " " << emp1.getLastName() << endl;
    // cout << "Yearly Salary: " << emp1.getYearlySalary() << endl;

    // cout << "Employee 2: " << emp2.getFirstName() << " " << emp2.getLastName() << endl;
    // cout << "Yearly Salary: " << emp2.getYearlySalary() << endl;


    // BankAccount account(1000.0);
    // int choice;
    // double amount;

    // do {
    //     cout << "\nMenu:\n";
    //     cout << "1. Display the account balance\n";
    //     cout << "2. Display the number of transactions\n";
    //     cout << "3. Display interest earned for this period\n";
    //     cout << "4. Make a deposit\n";
    //     cout << "5. Make a withdrawal\n";
    //     cout << "6. Exit the program\n";
    //     cout << "Enter your choice: ";
    //     cin >> choice;

    //     switch (choice) {
    //         case 1:
    //             account.displayBalance();
    //             break;
    //         case 2:
    //             account.displayTransactionCount();
    //             break;
    //         case 3:
    //             account.displayInterestEarned();
    //             break;
    //         case 4:
    //             cout << "Enter deposit amount: ";
    //             cin >> amount;
    //             account.deposit(amount);
    //             break;
    //         case 5:
    //             cout << "Enter withdrawal amount: ";
    //             cin >> amount;
    //             account.withdraw(amount);
    //             break;
    //         case 6:
    //             cout << "Exiting the program.\n";
    //             break;
    //         default:
    //             cout << "Invalid choice. Please try again.\n";
    //     }
    // } while (choice != 6);


    // Student student1("hassan", 185, 1, "D");

    // Student student2("hammad", 321, 3, "b");
    // Student student3("Dania", 184, 1, "D");
    // Student student4("momin", 200, 6, "D");

    // Student students[] = {student1, student2, student3, student4};

    // cout << "Students in section D:" << endl;
    // for (int i = 0; i < 4; i++) {
    //     if (students[i].section == "D") {
    //         cout << "Name of student: " << students[i].name << endl;
    //         cout << "Student's roll no: " << students[i].roll_no << endl;
    //         cout << "Semester the student is studying in: " << students[i].semester << endl;
    //         cout << "Section: " << students[i].section << endl;
    //         cout << "-------------------------" << endl;
    //     }
    // }

    return 0;
}