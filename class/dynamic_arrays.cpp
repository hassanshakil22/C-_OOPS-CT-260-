
#include <iostream>

using namespace std; 

int main (){

    int * ptr;
    int size = 10;
    ptr = new int[size];
    for (int i = 0 ; i < size ; i++)
    {
        ptr[i]=i;
    }
    cout << "array [" ;
    for (int i = 0 ; i < size ; i++)
    {
    cout << ptr[i] <<",";
    }
    cout << "]" ;

return 0;
}