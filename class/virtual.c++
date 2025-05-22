#include<iostream>


using namespace std;

// class BaseClass{
// public:
//     void virtual show() {
//         cout << "showing baseclass" << endl;
//     }
//     void display(){
//         cout << "displaying baseclass" << endl;
//     }

// };

// class DerivedClass : public BaseClass {
//     public:
//     void show() override { //override not necessary for every virtual function  but virtual necessary for every 
//         cout << "showing Derived class" << endl;
//     }
//     void display(){
//         cout << "displaying Derived class" << endl;
//     }

// }; 



// int main(){
//     //here classtype is the baseclass and instantiation is of the derived
//     // BaseClass* basePtr = new DerivedClass(); 



//     DerivedClass derivedClass  ;
//     BaseClass* basePtr =  &derivedClass ;

    
    
//     // here you can see that when we are normally creating object the virtual doesnt work as inteded
//     // BaseClass derived =  DerivedClass();

//     // derived.show();
//     // derived.display();

//     basePtr-> show() ; 

//     basePtr->display() ; 

//     // derived.display();
//     // derived.show();

//     return 0 ;
// }



//abstract class 
// class Shape {
// public :
//     //pure virtual as returns 0   -- const is zaroori as uts pure virtual
//     virtual double area()  {
//         return 0;
//     }
//     //pure virtual as returns 0   -- const is zaroori as uts pure virtual // but anotehr format 
//     virtual double perimeter()  = 0;
//     //not pure but regular as it doesnt return zero and has implementation
//     virtual void info() const {
//         cout << "Shape Info" <<endl;
//     }   ;

//      virtual ~Shape(){}   
// };

// //dervied from circle
// class Cirlce : public Shape{
//     int radius ;
//     public:
//     Cirlce (int r):radius(r){}
    
//       double area()    {
//         return 3.142 * radius * radius;
//     }
    
//     double perimeter()  {
//         return 2 * 3.142 * radius ;
//     }

//     void info() const override{
//         cout << "cIRCLE Info" <<endl;
//     }



// };   

// class Rectangle : public Shape{
//     int width , height ;
//     public:
//     Rectangle(int h , int w):width(w) , height(h) {}
    
//     double area()  override {
//         return width * height;
//     }
    
//     double perimeter()  override {
//         return 2 * width * height ;
//     }
// };   



// int main (){
// //must be initialized as pointer as abstract classes cant be intiialized as normally
//     Shape* circle = new Cirlce (5);
//     Shape* rect = new Rectangle (4,6);

//   cout <<  circle->area() << endl;
//   cout <<  circle->perimeter() << endl;

//   cout <<  rect->area() << endl;
//   cout <<  rect->perimeter() << endl;

//     return 0 ;
// }