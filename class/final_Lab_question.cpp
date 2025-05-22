#include <iostream>

using namespace std;
class Vehicle
{
private:
    string brand;
    string model;
    double rentalRate;

public:
    Vehicle()
    {
        cout << "Default Constructor of vehicle class" << endl;
    }
    Vehicle(string brand,
            string model,
            double rentalRate) : brand(brand), model(model), rentalRate(rentalRate)
    {
        cout << "Parameterized Constructor of vehicle class" << endl;
    }
    Vehicle(const Vehicle &other)
    {
        cout << "Copy Constructor of vehicle class" << endl;
    }
    ~Vehicle()
    {
        cout << "Desctuctor of vehicle class" << endl;
    }
    virtual void display()
    {
        cout << "Vehicle class members --> " << model << brand << rentalRate << endl;
    }
    void operator=(const Vehicle &other)
    {
        if (this != &other)
        {
            this->rentalRate = other.rentalRate;
            this->brand = other.brand;
            this->model = other.model;
        }
    }
    friend class ElectricVehicle;
};

class ElectricVehicle : public Vehicle
{
private:
    double batteryStorage;
    double mileage;

public:
    ElectricVehicle(double batteryStorage,
                    double mileage, string brand, string model, double rentalR) : batteryStorage(batteryStorage), mileage(mileage), Vehicle(brand, model, rentalR) {}
    ~ElectricVehicle()
    {
        cout << "Destructor" << endl;
    }

    void display() override
    {
        cout << "Electric Vehicle class members --> " << batteryStorage << mileage << endl;
        Vehicle::display();
    }
    bool operator==(const ElectricVehicle &other)
    {
        if (&other != this)
        {
            if (this->rentalRate == other.rentalRate &&
                this->brand == other.brand &&
                this->model == other.model &&
                this->batteryStorage == other.batteryStorage &&
                this->mileage == other.mileage)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return true;
        }
    }
};

int main()
{
}
// object-oriented programming concepts involving two classes: Vehicle (base class) and ElectricVehicle (derived class). The specifications are as follows:
// Class Vehicle (Base Class):
// Private Members:
// string brand

// string mod
// double rentalRate
// Constructors:
// Default constructor (prints a message)
// Parameterized constructo
// Copy constructor (prints a message when called)
// Destructor:
// Prints a message indicating the destructor is called.
// Member Function:
// virtual void display() — Displays the vehicle information.
// Operator Overloading:
// Overload the assignment operator (=) to copy base class members.
// Class ElectricVehicle (Derived from Vehicle):

// Private Members
// double batteryStorage
// double mileage
// Constructors:
// Parameterized constructor (initialize both base and derived members)
// Destructor

// Prints a message indicating the destructor is called.

// Member Function:

// Override the display() function to show both base and derived attributes.

// Operator Overloading:

// Overload the equality operator (==) to compare both base and derived members.

// In main():

// Create base class pointers and dynamically allocate both a Vehicle and an ElectricVehicle.

// Demonstrate runtime polymorphism using the display() function.

// Show the use of the copy constructor by creating a copy of an existing object.

// Show the use of the assignment operator (=) by assigning one object to another.

// Show the use of the equality operator (==) by comparing two objects.