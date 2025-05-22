#include <iostream>

using namespace std;

// // template <typename T, typename A>
// template <class  T ,class A>
// T add(T a, A b)
// {
//     return a + b;
// }
template <typename T>
class MyBox
{
public:
    T value;
    MyBox(T tval) : value(tval) {}

    void set(T val)
    {
        value = val;
    }
    T increment()
    {
        return value++;
    }

    T get()
    {
        return value;
    }
};
template<>
class MyBox<char>{
 char value;
    MyBox(char tval) : value(tval) {}

    void set(char val)
    {
        value = val;
    }
    char uppercase()
    {
        return toupper(value);
    }

    char get()
    {
        return value;
    }
};
int main()
{
     int array[] = {1,2,4,5,6,7,8};
     cout << array[-1];

    // MyBox<int> box(23);
    // cout << box.get();
    // cout << add(2.21, 5) << endl;
    // ;
    // cout << add(2.5, 5);

    return 0;
}