#include <iostream>
using namespace std;

int main()
{
    int size = 9;
    int* array = new int[size];

    // Fill array with 1 to 9
    for (int i = 0; i < size; ++i)
    {
        array[i] = i + 1;
    }

    int target = 15;
    int left = 0;
    int right = size - 1;
    bool found = false;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (array[mid] == target)
        {
            cout << "Target " << target << " found at index " << mid << endl;
            found = true;
            break;
        }
        else if (array[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    if (!found)
    {
        if (target < array[0])
            cout << "Target is less than the smallest element." << endl;
        else if (target > array[size - 1])
            cout << "Target is greater than the largest element." << endl;
        else
            cout << "Target not found in the array." << endl;
    }

    delete[] array;  // Clean up dynamically allocated memory
    return 0;
}
