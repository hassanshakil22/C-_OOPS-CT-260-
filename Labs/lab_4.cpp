    #include <iostream>
#include <cstring>
using namespace std;

// class Employee {
// private:
//     char* employeename;
//     const int employeeid;

// public:
//     Employee(const char* name, const int id) : employeeid(id) {
//         employeename = new char[strlen(name) + 1];
//         strcpy(employeename, name);
//     }

//     ~Employee() {
//         delete[] employeename;
//     }

//     void setemployeename(const char* name) {
//         delete[] employeename;
//         employeename = new char[strlen(name) + 1];
//         strcpy(employeename, name);
//     }

//     const char* getemployeename() const {
//         return employeename;
//     }

//     int getemployeeid() const {
//         return employeeid;
//     }

//     void display() const {
//         cout << "Employee ID: " << employeeid
//              << ", Employee Name: " << employeename << endl;
//     }
// };


// class DynamicArray {
// private:
//     int* arr;
//     int currentSize;
//     int capacity;

// public:
//     DynamicArray(int size) {
//         capacity = size;
//         arr = new int[capacity];
//         currentSize = 0;
//         for (int i = 0; i < capacity; ++i) {
//             arr[i] = 0;
//         }
//     }

//     ~DynamicArray() {
//         delete[] arr;
//     }

//     void push(int value) {
//         if (currentSize < capacity) {
//             arr[currentSize] = value;
//             currentSize++;
//         } else {
//             cout << "Array is full, can't push more elements." << endl;
//         }
//     }

//     int size() {
//         return currentSize;
//     }

//     void display() {
//         cout << "Array elements: ";
//         for (int i = 0; i < currentSize; ++i) {
//             cout << arr[i] << " ";
//         }
//         cout << endl;
//     }
// };
// #include <iostream>
// using namespace std;

// class Account {
// private:
//     int account_no;
//     double account_bal;
//     int security_code;
//     static int count;

// public:
//     void initialize(int no, double bal, int code) {
//         account_no = no;
//         account_bal = bal;
//         security_code = code;
//         count++;
//     }

//     void display() {
//         cout << "Account Number: " << account_no << endl;
//         cout << "Account Balance: " << account_bal << endl;
//         cout << "Security Code: " << security_code << endl;
//     }

//     static int getCount() {
//         return count;
//     }
// };

// int Account::count = 0;

// #include <iostream>
// using namespace std;

// class Circle {
// private:
//     const double pi = 3.14159; // Constant value for pi
//     double radius;

// public:
//     Circle(double r) : radius(r) {}

//     double getArea() const {
//         return pi * radius * radius;
//     }

//     double getCircumference() const {
//         return 2 * pi * radius;
//     }

//     void display() const {
//         cout << "Radius: " << radius << endl;
//         cout << "Area: " << getArea() << endl;
//         cout << "Circumference: " << getCircumference() << endl;
//     }
// };

#include <iostream>
#include <string>
using namespace std;

class HotelRentSystem {
private:
    string name;
    int days;
    static const double dailyCharge;
    double rent;

public:
    HotelRentSystem(string n, int d) : name(n), days(d), rent(0.0) {
        calculateRent();
    }

    void calculateRent() {
        if (days > 7) {
            rent = (days - 1) * dailyCharge;
        } else {
            rent = days * dailyCharge;
        }
    }

    void displayDetails() const {
        cout << "Customer Name: " << name << endl;
        cout << "Days Stayed: " << days << endl;
        cout << "Rent: " << rent << endl;
    }

    static double getDailyCharge() {
        return dailyCharge;
    }
};

const double HotelRentSystem::dailyCharge = 1000.85;


int main() {
    HotelRentSystem customer1("Nasir", 18);
    HotelRentSystem customer2("Ali", 7);

    cout << "Customer 1 Details:" << endl;
    customer1.displayDetails();
    cout << "Customer 2 Details:" << endl;
    customer2.displayDetails();

 
    // Circle c(5.0);

    // cout << "Circle Details:" << endl;
    // c.display();
    // Account a1, a2;
    // a1.initialize(147, 50000, 0001);
    // a2.initialize(163, 178000, 5867);

    // cout << "Account 1:" << endl;
    // a1.display();
    // cout << "Account 2:" << endl;
    // a2.display();

    // cout << "Total number of Account objects created: " << Account::getCount() << endl;

    return 0;
}


// int main() {
//     DynamicArray da(5);

//     da.push(10);
//     da.push(20);
//     da.push(30);
//     da.push(40);
//     da.push(50);

//     da.display();

//     cout << "Size of array: " << da.size() << endl;

//     da.push(60); // This will trigger the full array message

//     return 0;
// }

// int main() {
//     Employee employee1("Alice", 101);
//     Employee employee2("Bob", 102);
//     Employee employee3("Charlie", 103);
//     cout << "Initial Employee Details:" << endl;
//     employee1.display();
//     employee2.display();
//     employee3.display();
//     employee1.setemployeename("Alicia");
//     employee2.setemployeename("Robert");
//     employee3.setemployeename("Charles");
//     cout << "\nUpdated Employee Details:" << endl;
//     employee1.display();
//     employee2.display();
//     employee3.display();

//     return 0;
// }
