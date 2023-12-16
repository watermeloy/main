#include "matrix_operations.h"
#include <algorithm>
#include <iostream>

namespace MatrixOperations {
	void orderRowsWithEight(int** matrix, int n) {
		for (int i = 0; i < n; i++) {
			bool hasEight = false;
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] % 10 == 8) {
					hasEight = true;
					break;
				}
			}
			if (hasEight) {
				std::sort(matrix[i], matrix[i] + n);
			}
		}
	}

	int findMaxAndMinSum(int** matrix, int n) {
		int max = matrix[0][0], min = matrix[0][0];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (matrix[i][j] > max) {
					max = matrix[i][j];
				}
				if (matrix[i][j] < min) {
					min = matrix[i][j];
				}
			}
		}
		return max + min;
	}
}
