#include <iostream>
using namespace std;

class Vehicle {
protected:
    string type;
    string make;
    string model;
    string color;
    int year;
    double milesDriven;

public:
    Vehicle(string t, string mk, string mdl, string clr, int yr, double miles)
        : type(t), make(mk), model(mdl), color(clr), year(yr), milesDriven(miles) {}

    void displayVehicle() const {
        cout << "Type: " << type << "\nMake: " << make << "\nModel: " << model
             << "\nColor: " << color << "\nYear: " << year << "\nMiles Driven: " << milesDriven << endl;
    }
};

class GasVehicle : virtual public Vehicle {
public:
    int fuelTankSize;
    GasVehicle(int fts, string t, string mk, string mdl, string clr, int yr, double miles)
        : Vehicle(t, mk, mdl, clr, yr, miles), fuelTankSize(fts) {}

    void displayGasVehicle() const {
        cout << "Fuel Tank Size: " << fuelTankSize << " liters" << endl;
    }
};

class ElectricVehicle : virtual public Vehicle {
public:
    int energyStorage;
    ElectricVehicle(int es, string t, string mk, string mdl, string clr, int yr, double miles)
        : Vehicle(t, mk, mdl, clr, yr, miles), energyStorage(es) {}

    void displayElectricVehicle() const {
        cout << "Energy Storage: " << energyStorage << " kWh" << endl;
    }
};

class HeavyVehicle : virtual public GasVehicle, virtual public ElectricVehicle {
protected:
    double maximumWeight;
    int numberOfWheels;
    double length;

public:
    HeavyVehicle(double maxWeight, int wheels, double len,
                 int fts, int es,
                 string t, string mk, string mdl, string clr, int yr, double miles)
        : Vehicle(t, mk, mdl, clr, yr, miles),
          GasVehicle(fts, t, mk, mdl, clr, yr, miles),
          ElectricVehicle(es, t, mk, mdl, clr, yr, miles),
          maximumWeight(maxWeight), numberOfWheels(wheels), length(len) {}

    void displayHeavyVehicle() const {
        cout << "Max Weight: " << maximumWeight << " tons"
             << "\nWheels: " << numberOfWheels
             << "\nLength: " << length << " meters" << endl;
    }
};

class Bus : public HeavyVehicle {
public:
    int noOfSeats;

    Bus(int seats, double mw, int wheels, double len, int fts, int es,
        string t, string mk, string mdl, string clr, int yr, double miles)
        : Vehicle(t, mk, mdl, clr, yr, miles),
          GasVehicle(fts, t, mk, mdl, clr, yr, miles),
          ElectricVehicle(es, t, mk, mdl, clr, yr, miles),
          HeavyVehicle(mw, wheels, len, fts, es, t, mk, mdl, clr, yr, miles),
          noOfSeats(seats) {}

    void display() const {
        cout << "------ Bus Info ------" << endl;
        displayVehicle();
        displayGasVehicle();
        displayElectricVehicle();
        displayHeavyVehicle();
        cout << "Number of Seats: " << noOfSeats << endl;
    }
};

int main() {
    Bus b(50,    
          15.0,  
          6,     
          12.5,  
          100,   
          300,   
          "Bus", "Volvo", "7900", "White", 2022, 20000.5);

    b.display();

    return 0;
}
