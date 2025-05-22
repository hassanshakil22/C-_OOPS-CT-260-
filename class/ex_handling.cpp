// #include <iostream>
// using namespace std;
// int main()
// {
//     double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
//     int index;
//     cout << "Enter array index: ";
//     cin >> index;
//     try
//     {
//         // throw exception if array out of bounds
//         if (index >= 4)
//             throw "Error: Array out of bounds!";
//         // not executed if array is out of bounds
//         cout << "Enter numerator: ";
//         cin >> numerator;

//         cout << "Enter denominator: ";
//         cin >> denominator;
//         // throw exception if denominator is 0
//         if (denominator == 0)
//             throw denominator;
//         // not executed if denominator is 0
//         arr[index] = numerator / denominator;
//         cout << arr[index] << endl;
//     }
//     // catch "Array out of bounds" exception
//     catch (const char *msg)
//     {
//         cout << msg << endl;
//     }
//     // catch "Divide by 0" exception
//     catch (double num)
//     {
//         cout << "Error: Cannot divide by " << num << endl;
//     }
//     // catch any other exception
//     catch (...)
//     {
//         cout << "Unexpected exception!" << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <stdexcept>
using namespace std;
void divide(int numerator, int denominator) {
try{
if (denominator == 0) {
throw runtime_error("Division by zero error");

}
if (denominator == 1) {
throw range_error("range error thrown on 1 division");

}

cout<<"The result is : "<<float(numerator)/denominator;
}
catch (const exception& ex) {
cerr<<"Exception caught: "<<ex.what()<<endl;
}
}
int main() {
divide(10, 1);
divide(10, 20);
return 0;
}