#include <iostream>
#include <vector>
#include <exception>

// Custom exception class
class ArrayException : public std::exception {
public:
    const char* what() const noexcept override {
        return "Array index out of bounds!";
    }
};

// Template class Array
template <typename T>
class Array {
private:
    std::vector<T> data;
    int size;

public:
    // Constructor to set size
    Array(int s) : size(s) {
        data.resize(size);
    }

    // Overloaded [] operator with bounds checking
    T& operator[](int index) {
        if (index < 0 || index >= size) {
            throw ArrayException();
        }
        return data[index];
    }

    // Friend function to compute sum
    friend T sum(Array<T>& arr) {
        T total = 0;
        for (int i = 0; i < arr.size; ++i) {
            total += arr.data[i];
        }
        return total;
    }
};

// Test program
int main() {
    try {
        Array<int> arr(5);

        // Assign values
        for (int i = 0; i < 5; ++i) {
            // arr[i] = i + 1; // 1, 2, 3, 4, 5
            std::cout << arr[i]; 
        }

        // Display elements
        std::cout << "Array elements: ";
        for (int i = 0; i < 5; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;

        // Sum of elements
        std::cout << "Sum: " << sum(arr) << std::endl;

        // Test invalid access
        std::cout << arr[10] << std::endl; // This will throw exception

    } catch (const ArrayException& ex) {
        std::cerr << "Caught Exception: " << ex.what() << std::endl;
    }

    return 0;
}
