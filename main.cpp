#include <algorithm>
#include <iostream>
#include "matrix_operations.h"

int main() {
	int n;
	std::cout << "Enter the size of the matrix: ";
	std::cin >> n;

	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
		for (int j = 0; j < n; j++) {
			std::cout << "Enter element A" << i + 1 << j + 1 << ": ";
			std::cin >> matrix[i][j];
		}
	}

	int result = MatrixOperations::findMaxAndMinSum(matrix, n);
	if (result == 0) {
		MatrixOperations::orderRowsWithEight(matrix, n);
		std::cout << "Modified matrix:" << std::endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				std::cout << matrix[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
	else {
		std::cout << "The sum of the largest and smallest elements is not zero." << std::endl;
	}

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}
