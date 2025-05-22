#include <iostream>
using namespace std;

// class Shape {
//     public:
//         int sidesno;
//         double area;
//         Shape(int sides) : sidesno(sides), area(0) {}
//         int getsidesno() const {
//             return sidesno;
//         }
//         double getarea() const {
//             return area;
//         }
//         void setarea(double a) {
//             area = a;
//         }
//     };
    
//     class Rectangle : public Shape {
//     public:
//         double length, width;
//         Rectangle(double l, double w) : Shape(4), length(l), width(w) {}
//         double getlength() const { return length; }
//         void setlength(double l) { length = l; }
//         double getwidth() const { return width; }
//         void setwidth(double w) { width = w; }
//         void generate_area() {
//             area = length * width;
//         }
//     };
    
//     class Circle : public Shape {
//     public:
//         double radius;
//         Circle(double r) : Shape(0), radius(r) {}
//         double get_radius() const { return radius; }
//         void set_radius(double r) { radius = r; }
//         void generate_area() {
//             area = 3.142 * radius * radius;
//         }
//     };
    
//     class Triangle : public Shape {
//     private:
//         double height, base;
    
//     public:
//         Triangle(double h, double b) : Shape(3), height(h), base(b) {}
//         double get_height() const { return height; }
//         void set_height(double h) { height = h; }
//         double get_base() const { return base; }
//         void set_base(double b) { base = b; }
//         void generate_area() {
//             area = (height * base) / 2;
//         }
//     };
    
//     class Square : public Rectangle {
//     public:
//         Square(double side) : Rectangle(side, side) {}
//         void check_sides() const {
//             if (length == width) {
//                 cout << "Both sides are equal. This is a square." << endl;
//             } else {
//                 cout << "Sides are not equal." << endl;
//             }
//         }
//         void generate_area() {
//             area = length * length;
//         }
//     };

// class Calculator {
// private:
//     double num1, num2, num3;

// public:
//     Calculator(double n1, double n2, double n3 = 0) {
//         num1 = n1;
//         num2 = n2;
//         num3 = n3;
//     }

//     double add(double a, double b) {
//         return a + b;
//     }

//     double add(double a, double b, double c) {
//         return a + b + c;
//     }

//     double multiply(double a, double b) {
//         return a * b;
//     }

//     double multiply(double a, double b, double c) {
//         return a * b * c;
//     }

//     double subtract(double a, double b) {
//         return a - b;
//     }

//     double divide(double a, double b) {
//         if (b != 0)
//             return a / b;
//         else {
//             cout << "Error" << endl;
//             return 0;
//         }
//     }
// };

#include <cmath>


// class Vector {
// private:
//     double x, y;

// public:
//     Vector(double val, double value) : x(val), y(value) {}

//     double get_x() const { return x; }
//     double get_y() const { return y; }

//     Vector operator+(const Vector& v) const {
//         return Vector(x + v.x, y + v.y);
//     }

//     Vector operator-(const Vector& v) const {
//         return Vector(x - v.x, y - v.y);
//     }

//     Vector operator*(double scalar) const {
//         return Vector(x * scalar, y * scalar);
//     }

//     Vector operator/(double scalar) const {
//         if (scalar != 0) {
//             return Vector(x / scalar, y / scalar);
//         } else {
//             cout << "Error: Division by zero!" << endl;
//             return Vector(0, 0);
//         }
//     }

//     double magnitude() const {
//         return sqrt(x * x + y * y);
//     }

//     void display() const {
//         cout << "(" << x << ", " << y << ")";
//     }
// };



class Person {
private:
    string name;
    string occupation;

public:
    Person(string o) : occupation(o) {}

    void Draw() {
        cout << "A person can draw in many ways" << endl;
    }
};

class Artist : public Person {
public:
    Artist() : Person("artist") {}

    void Draw() {
        cout << "An artist can draw with a paint brush" << endl;
    }
};

class Gunman : public Person {
public:
    Gunman() : Person("gunman") {}

    void Draw() {
        cout << "A gunman draws a gun to shoot" << endl;
    }
};



    int main() {

        Artist artist;
        Gunman gunman;
    
        artist.Draw();
        gunman.Draw();
    
        // Vector v1(12, 3);
        // Vector v2(7, 22);
    
        // cout << "Vector v1: ";
        // v1.display();
        // cout << endl;
    
        // cout << "Vector v2: ";
        // v2.display();
        // cout << endl;
    
        // Vector sum = v1 + v2;
        // cout << "v1 + v2 = ";
        // sum.display();
        // cout << endl;
    
        // Vector difference = v1 - v2;
        // cout << "v1 - v2 = ";
        // difference.display();
        // cout << endl;
    
        // Vector scaled = v1 * 2.5;
        // cout << "v1 * 2.5 = ";
        // scaled.display();
        // cout << endl;
    
        // Vector divided = v1 / 2;
        // cout << "v1 / 2 = ";
        // divided.display();
        // cout << endl;
    
        // cout << "Magnitude of v1: " << v1.magnitude() << endl;
        // cout << "Magnitude of v2: " << v2.magnitude() << endl;
    
         


        // double n1 = 10.5, n2 = 5.2, n3 = 2.0;
        // Calculator calc(n1, n2, n3);
    
        // cout << "Adding " << n1 << " and " << n2 << ": " << calc.add(n1, n2) << endl;
        // cout << "Adding " << n1 << ", " << n2 << ", and " << n3 << ": " << calc.add(n1, n2, n3) << endl;
        // cout << "Multiplying " << n1 << " and " << n2 << ": " << calc.multiply(n1, n2) << endl;
        // cout << "Multiplying " << n1 << ", " << n2 << ", and " << n3 << ": " << calc.multiply(n1, n2, n3) << endl;
        // cout << "Subtracting " << n1 << " and " << n2 << ": " << calc.subtract(n1, n2) << endl;
        // cout << "Dividing " << n1 << " by " << n2 << ": " << calc.divide(n1, n2) << endl;
        
        //     Rectangle r(10.0, 6.0);
    //     r.generate_area();
    //     cout << "Rectangle area: " << r.getarea() << endl;
    
    //     Circle c(5.0); 
    //     c.generate_area();
    //     cout << "Circle area: " << c.getarea() << endl;
    
    //     Triangle t(6.0, 4.0);
    //     t.generate_area();
    //     cout << "Triangle area: " << t.getarea() << endl;
    
    //     Square s(7.0); 
    //     s.check_sides();
    //     s.generate_area();
    //     cout << "Square area: " << s.getarea() << endl;
    // return 0;
    }
    