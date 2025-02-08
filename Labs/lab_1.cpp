#include <iostream>
using namespace std;

class Matrix{
private:
int matrix[3][3];
public:
void writeMatrix(){
for (int row = 0; row < 3; row++)
{
    for (int col = 0; col < 3; col++)
        {
            cout << "Enter element ["<<row<<"]"<<"["<<col<<"] -->";
            cin >> matrix[row][col];  
        }

}}
void showMatrix(){
cout << "YOUR MATRIX" <<endl;
for (int row = 0; row < 3; row++)
{
    cout << "| ";
    for (int col = 0; col < 3; col++)
        {
            
            cout <<matrix[row][col]<<" ";  
        }
    cout << "|";
cout << endl;
}
}
void matrixAddition (Matrix m1 , Matrix m2 ){
cout << "YOUR MATRIX AFTER ADDITION" <<endl;

for (int row = 0; row < 3; row++)
{
    cout << "| ";
    for (int col = 0; col < 3; col++)
        {
            cout << m1.matrix[row][col] + m2.matrix[row][col] << " " ;
        }
    cout << "|";
cout << endl;
}

}

Matrix matrixMultiplication(Matrix m1 , Matrix m2){
    Matrix resultant;
    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 0;j  < 3; j++)
        {
            resultant.matrix[i][j] = 0;
        }
        
    }
    cout << "Your matrix multiplication";
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                resultant.matrix[i][j]=resultant.matrix[i][j] + (m1.matrix[i][k] * m2.matrix[k][j]);
            }
            
        }
}
return resultant;
}
};

int main(){
//   int rollNo;
//   double totalMarks=0;
//   cout << "ENTER YOUR ROLL NO :";
//   cin >> rollNo;
//   for (int i = 1 ; i <= 5; i++)
//   {
//   double mark= 0;
//   cout << "ENTER MARKS OBTAINED IN " << i << " SUBJECT :";
//   cin >> mark;
//   totalMarks += mark;

//   }
//   cout << "Your total marks are : "<<totalMarks<<endl;
//   cout << "Your percentage is : " << (totalMarks/500)*100 << "%";

// 2. Write a program to swap three numbers entered by a user using pointers.

// int num1;
// int num2;
// int num3;
// cout << "Enter three numbers : ";
// cin >> num1 >> num2 >> num3;
// cout << "Before swapping:" << endl;
// cout << "num1 : " <<num1 <<" num2 : " <<num2 << " num3 : "<< num3 << endl;

// int *ptr1 = &num1; 
// int *ptr2 = &num2 ;
// int *ptr3 = &num3 ;
// int temp ;
// temp = *ptr1;
// *ptr1 = *ptr2;
// *ptr2 = *ptr3;
// *ptr3 = temp;
// cout << "After swapping:" << endl;

// cout << "num1 : " <<num1 <<" num2 : " <<num2 << " num3 : "<< num3;

// double tempInF;
// cout << "Enter temprature in fahrenhiet : ";
// cin >> tempInF;
// double tempInC = (tempInF-32)/1.8;
// cout << "Converted temprature in celcius --> " <<  tempInC << "degrees ";  

// Using 2-D arrays, write a program that allows the user to input two, 3x3 matrices. 
// Write a function for adding two matrices. Write another function for multiplying the 
// // two matrices.

Matrix m1 ;
Matrix m2 ;
Matrix result;
m1.writeMatrix();
m1.showMatrix();
m2.writeMatrix();
m2.showMatrix();
result.matrixAddition(m1,m2);
result.matrixMultiplication(m1,m2).showMatrix();
return 0;
}

