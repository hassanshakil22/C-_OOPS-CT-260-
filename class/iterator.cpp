#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {10, 20, 30, 40};

    vector<int>::reverse_iterator it;
    for (it = nums.rbegin(); it != nums.rend() + 1; ++it)
    {
        try{
            if (it == nums.rend())
            {
                throw overflow_error("it out of bound ");
            }
            cout << *it << " ";
            
        }
        catch( const exception &e){
            cerr << "Exception caught : " << e.what();
        }
    }

    return 0;
}