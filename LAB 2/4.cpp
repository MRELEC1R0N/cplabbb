// Write a program to perform the addition of two matrices using function.

#include <iostream>
#include <vector>

std::vector<std::vector<int>> addMatrices(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> C(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    return C;
}

int main() {
    std::vector<std::vector<int>> A = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::vector<std::vector<int>> B = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    std::vector<std::vector<int>> C = addMatrices(A, B);

    std::cout << "The result of the addition is:\n";
    for (const auto& row : C) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
