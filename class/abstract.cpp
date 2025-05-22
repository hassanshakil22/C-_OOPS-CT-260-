// 4 Object Oriented Programming (CT-260) Lab 09
#include <iostream>
using namespace std;
class Shape
{
protected:
    float dimension;

public:
    void getDimension()
    {
        cin >> dimension;
    }

private:
    // pure virtual Function
    virtual float calculateArea() = 0;
};
// Derived class
class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimension * dimension;
    }
};
// Derived class
class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};// Encrypt by shifting each character by 'shift' value
string encrypt(string word, int key) {
    string encrypted = "";
    for (char letter : word) {
        encrypted += char(int(letter) + key);
    }
    return encrypted;
}

// Decrypt by reversing the shift
string decrypt(string encryptedWord, int key) {
    string decrypted = "";
    for (char letter : encryptedWord) {
        decrypted += char(int(letter) - key);
    }
    return decrypted;
}

int main()
{
    // Square square;
    // Circle circle;
    // cout << "Enter the length of the square: ";
    // square.getDimension( );
    // cout << "Area of square: " << square.calculateArea( ) << endl;

    // cout << "\nEnter radius of the circle: ";
    // circle.getDimension( );
    // cout << "Area of square: " << square.calculateArea( ) << endl;

    // cout << "Area of circle: " << circle.calculateArea( ) << endl;

    // int matrix1[3][3] = {{7, 8 , 9 }, {9, 10 , 11 }, {11, 12 , 13}};
    // int matrix2[3][3] = {{1,2,4}, {2,5, 10}, {1,15, 12}};
    // for (int i = 0; i < 3; i++)
    // {

    //     for (int j = 0; j < 3; j++)
    //     {
    //         int result[i][j] = {0} ;

    //         for (int k = 0; k < 3; k++)
    //         {
    //             result[i][j]+= matrix1[i][k] * matrix2[k][j] ;
    //         }
    //     }
    // }


    return 0;
}
