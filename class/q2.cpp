#include<iostream>
#include<bits/stdc++.h>


class MatrixException : public std::exception {
    std::string message;
public:
    MatrixException(const std::string& msg) : message(msg) {}
    const char* what() const noexcept override {
        return message.c_str();
    }
};

template<typename T>
class Matrix {
    std::vector<std::vector<T>> data;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        if (r <= 0 || c <= 0) {
            throw MatrixException("Invalid matrix dimensions.");
        }
        data.resize(r, std::vector<T>(c));
    }

    std::vector<T>& operator[](int index) {
        if (index < 0 || index >= rows) {
            throw MatrixException("Row index out of bounds.");
        }
        return data[index];
    }

    const std::vector<T>& operator[](int index) const {
        if (index < 0 || index >= rows) {
            throw MatrixException("Row index out of bounds.");
        }
        return data[index];
    }

    Matrix<T> operator+(const Matrix<T>& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw MatrixException("Matrix dimensions must match for addition.");
        }
        Matrix<T> result(rows, cols);
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                result[i][j] = data[i][j] + other[i][j];
        return result;
    }

    void sortColumns() {
        for (int col = 0; col < cols; col++) {
            std::vector<T> column(rows);
            for (int row = 0; row < rows; row++) {
                column[row] = data[row][col];
            }
            std::sort(column.begin(), column.end());
            for (int row = 0; row < rows; row++) {
                data[row][col] = column[row];
            }
        }
    }

    friend T maxElement(const Matrix<T>& matrix) {
        T maxVal = matrix.data[0][0];
        for (const auto& row : matrix.data) {
            for (const auto& val : row) {
                if (val > maxVal) maxVal = val;
            }
        }
        return maxVal;
    }

    void display() const {
        for (const auto& row : data) {
            for (const auto& val : row)
                std::cout << val << " ";
            std::cout << "\n";
        }
    }
};

// Test the class
int main() {
    try {
        Matrix<int> A(3, 3);
        Matrix<int> B(3, 3);

        // Fill matrices
        int val = 1;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                A[i][j] = val;
                B[i][j] = val * 2;
                val++;
            }

        std::cout << "Matrix A:\n";
        A.display();

        std::cout << "Matrix B:\n";
        B.display();

        Matrix<int> C = A + B;
        std::cout << "Matrix C = A + B:\n";
        C.display();

        std::cout << "Max Element in C: " << maxElement(C) << "\n";

        std::cout << "C after sorting columns:\n";
        C.sortColumns();
        C.display();

    } catch (const MatrixException& e) {
        std::cerr << "Matrix Error: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Unknown error occurred.\n";
    }

    return 0;
}
