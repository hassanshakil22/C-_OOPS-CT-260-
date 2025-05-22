#include <iostream>

using namespace std;

// class BaseClass{
// private:
// int privateInt;
// protected:
// int protectedInt;
// public:
// int  publicInt; 

// void setPrivateInt(int value) { privateInt = value; }
// void setProtectedInt(int value) { protectedInt = value; }
// void setPublicInt(int value) { publicInt = value; }

// int getPrivateInt() { return privateInt; }
// int getProtectedInt() { return protectedInt; }
// int getPublicInt() { return publicInt; }
    

// };
// class PublicChild : public BaseClass{
// public:
//     PublicChild(){
//         cout << "public child class " << endl;
//     }
//     void showValues() {
//         cout << " ProtectedInt: " << protectedInt << ", PublicInt: " << publicInt << endl;
//         cout << "inacessible private int " << getPrivateInt();
//     }
// };



// class PrivateChild : private BaseClass{
//     public:
//     PrivateChild(){
//         cout << "Private child class " << endl;
//     }
//     void showValues() {
//         cout << "inacessible values gotten thru get funcs" << endl ;
//         cout << " ProtectedInt: " << getProtectedInt() << ", PublicInt: " << getPublicInt() << " private int " << getPrivateInt() << endl; 
//     }


// };

// class ProtectedChild : protected BaseClass{
//     public:
//     ProtectedChild(){
//         cout << "Protected child class " << endl;
//     }
//     void showValues() {
//         cout << " ProtectedInt: " << protectedInt << ", PublicInt: " << publicInt  << endl; 
//         cout << "inaccessible private int " << getPrivateInt() << endl ;
//     }

// };

// class Teacher{
// private : 
// string name;
// int age ;
// string institute;
// protected:
// string Dept;
// public:
// string CourseName;
// string Designation;

// void setTeacherDetails(string name, int age , string institute){
//     this->name = name;
//     this->age = age;
//     this->institute= institute;
// }


// void setCourseName(string cName){ CourseName = cName;} 
// void setDesignation(string desg){ Designation = desg;} 


// string getName (){return this->name;}
// int getAge (){return this->age;}
// string getInstitute (){return this->institute;}


// string getCourseName (){return this->CourseName;}
// string getDesignation (){return this->Designation;}
// string getDept (){return this->Dept;}


// };

// class HumanitiesTeacher : public Teacher{
// public:
// HumanitiesTeacher(string name , int age , string institute){
//     this->Dept =  "Humanities ";
//     setTeacherDetails(name,age,institute);

// }
// };
// class ScienceTeacher : public Teacher{
//     public:
// ScienceTeacher(string name , int age , string institute){
//     this->Dept = "Science";
//     setTeacherDetails(name,age,institute);


// }

    
// };
// class MathsTeacher : public Teacher{
//     public:
//     MathsTeacher(string name , int age , string institute){
//         this->Dept = "Maths";
//         setTeacherDetails(name,age,institute);

//     }
// };


// class Weapons {
//     public:
//         void WeaponsDescription() {
//             cout << "Weapons are used for defense and attack in military and combat." << endl;
//         }
//     };
// class HotWeapons : public Weapons{
//     public:
//     void HotWeaponsDescription() {
//         cout << "Hot weapons use explosive materials like gunpowder to create destruction." << endl;
//     }
// };
// class Bombs : public HotWeapons{
//     public:
//     void BombsDescription() {
//         cout << "Bombs explode and cause large-scale destruction upon detonation." << endl;
//     }
// }    ;
// class NuclearBombs : public Bombs{
//     public:
//     void NuclearBombsDescription() {
//         cout << "Nuclear bombs explode using nuclear fission and fusion, causing massive destruction." << endl;
//     }
// }    ;

class Item {
protected:
    string name;
    int quantity;

public:
    Item(string n, int q) : name(n), quantity(q) {}

     double getPrice() = 0;
     double getDiscount() = 0;

    double calculateTotal() {
        return quantity * (getPrice() - (getPrice() * getDiscount()));
    }
};

class BakedGoods : public Item {
public:
    BakedGoods(string n, int q) : Item(n, q) {}

    double getDiscount() override {
        return 0.10;
    }
};

class Cakes : public BakedGoods {
public:
    Cakes(int q) : BakedGoods("Cake", q) {}

    double getPrice() override {
        return 600;
    }
};

class Bread : public BakedGoods {
public:
    Bread(int q) : BakedGoods("Bread", q) {}

    double getPrice() override {
        return 200;
    }
};

class Drinks : public Item {
public:
    Drinks(int q) : Item("Drink", q) {}

    double getPrice() override {
        return 100;
    }

    double getDiscount() override {
        return 0.05;
    }
};


int main (){
    int cakeQty, breadQty, drinkQty;

    cout << "Enter quantity of Cakes: ";
    cin >> cakeQty;
    cout << "Enter quantity of Bread: ";
    cin >> breadQty;
    cout << "Enter quantity of Drinks: ";
    cin >> drinkQty;

    Cakes cakes(cakeQty);
    Bread bread(breadQty);
    Drinks drinks(drinkQty);

    double total = cakes.calculateTotal() + bread.calculateTotal() + drinks.calculateTotal();

    cout << "Total Bill: " << total << endl;

    
   
    // Weapons w;
    // w.WeaponsDescription();
    
    // HotWeapons hw;
    // hw.WeaponsDescription();
    // hw.HotWeaponsDescription();

    // Bombs b;
    // b.WeaponsDescription();
    // b.HotWeaponsDescription();
    // b.BombsDescription();

    // NuclearBombs nb;
    // nb.WeaponsDescription();
    // nb.HotWeaponsDescription();
    // nb.BombsDescription();
    // nb.NuclearBombsDescription();



















    // HumanitiesTeacher hTeacher("Alice", 40, "Oxford");
    // ScienceTeacher sTeacher("Bob", 35, "Harvard");
    // MathsTeacher mTeacher("Charlie", 50, "MIT");

    // // Setting additional details
    // hTeacher.setCourseName("History");
    // hTeacher.setDesignation("Lecturer");

    // sTeacher.setCourseName("Physics");
    // sTeacher.setDesignation("Professor");

    // mTeacher.setCourseName("Algebra");
    // mTeacher.setDesignation("Assistant Professor");


    // cout << "Humanities Teacher: " << hTeacher.getName() << ", Age: " << hTeacher.getAge()
    //      << ", Institute: " << hTeacher.getInstitute() << ", Department: " << hTeacher.getDept()
    //      << ", Course: " << hTeacher.getCourseName() << ", Designation: " << hTeacher.getDesignation() << endl;

    // cout << "Science Teacher: " << sTeacher.getName() << ", Age: " << sTeacher.getAge()
    //      << ", Institute: " << sTeacher.getInstitute() << ", Department: " << sTeacher.getDept()
    //      << ", Course: " << sTeacher.getCourseName() << ", Designation: " << sTeacher.getDesignation() << endl;

    // cout << "Maths Teacher: " << mTeacher.getName() << ", Age: " << mTeacher.getAge()
    //      << ", Institute: " << mTeacher.getInstitute() << ", Department: " << mTeacher.getDept()
    //      << ", Course: " << mTeacher.getCourseName() << ", Designation: " << mTeacher.getDesignation() << endl;




// BaseClass base;
// PublicChild pubChild;
// PrivateChild privChild;
// ProtectedChild protChild;

// // Setting values using setters
// base.setPrivateInt(10);
// base.setProtectedInt(20);
// base.setPublicInt(30);

// pubChild.setPrivateInt(40);   
// pubChild.setProtectedInt(50); 
// pubChild.setPublicInt(60);    // Allowed (public remains public)

// // privChild.setPublicInt(70);  // inacessible  (private)
// // protChild.setPublicInt(80);  // inacessible (protected)

// cout << "BaseClass - PublicInt: " << base.getPublicInt() << endl;

// pubChild.showValues();
// privChild.showValues(); // only garbage values as they cant be set 
// protChild.showValues();// only garbage values as they cant be set 


















return 0;
}