#include <iostream>
#include <map>
using namespace std;
int main()
{
    // Create a map of strings to integers
    // map<string, int> m;
    // // Insert some values into the map
    // m["one"] = 1;
    // m["two"] = 2;
    // m["three"] = 3;
    // // Get an iterator pointing to the first element in the map
    // map<string, int>::iterator it = m.begin();
    // // Iterate through the map and print the elements
    // while (it != m.end())
    // {
    //     cout << "Key: " << it->first << ", Value: " << it->second
    //          << endl;
    //     ++it;
    // }

    // map<string, map<string, string>> info;
    // info["address"]["plot"] = "A";
    // info["address"]["H-no"] = "305";
    // info["name"]["fname"] = "hassan";
    // info["name"]["lname"] = "hassan";

    // for (auto it = info.begin(); it != info.end(); ++it)
    // {
    //     cout << "key : " <<  it->first ;
    //         for (const auto& inner_it : it->second)
    // {
    //     cout << " [ key :" << inner_it.first << " val :" << inner_it.second << "] ";
    // }
    // }

    map<string, int> fruits = {{"apple", 23}, {"banana", 2}};
    fruits["peach"] = 4;
    fruits["apple"] = fruits["apple"] + 4;
    fruits.at("apple");
    map<string, int>::iterator it = fruits.find("apple");
    if (it != fruits.end())
    {
        cout << "Found: " << it->first << " => " << it->second << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }
    fruits.insert({"hassan", 5});
    for (auto &&i : fruits)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}