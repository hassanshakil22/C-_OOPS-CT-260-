#include <iostream>

#include <vector>
using namespace std;
int main()
{
    // // Initialize a vector
    // std::vector<std::string> vec = {"1"," 2"," 3"};
    // // Add elements at the end
    // vec.push_back("4"); // O(1) amortized
    // vec.emplace_back("5123123hassan");
    // vec.emplace_back("65123123hassan");
    // // Access elements (random access, O(1))
    // std::cout << "Element at index 2: " << vec[2] << "\n"; // Output: 3
    // // Insert at the beginning (slow, O(n))
    // vec.insert(vec.begin(), "0");
    // // Iterate over vector
    // for (std::string x : vec) {
    //     std::cout << x << " "; // Output: 0 1 2 3 4
    // }
    // std::cout << "\n";
    // // Size and capacity
    // std::cout << "Size: " << vec.size() << "\n"; // Number of elements
    // std::cout << "Capacity: " << vec.capacity() << "\n"; // Allocated memory

    vector<int> nums = {2, 4, 5, 6, 7, 8};
    cout << nums.front() << endl;
    
    // cout << *(nums.end()-1) << endl;
    cout << nums.back()<< endl;
    // cout << nums.at(5) << endl;
    nums.erase(nums.begin() + 1);
    cout << nums.at(4) << endl;
    nums.emplace_back(2);
    nums.push_back(2);
    nums.pop_back();
    nums.at(2);
    nums.insert(nums.begin()+1,2);
    for (int x : nums)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
