#include <iostream>
#include <iomanip>
#include "hw2t12.h"

void findMax(int** matrix, int n, int m)
{
	int maxSum = 0;
	int idx = 0;
	for (int i = 0; i < n; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += matrix[i][j];
		}
		if (sum > maxSum) {
			maxSum = sum;
			idx = i;

		}
	}
	std::cout << "Строка " << idx+1 << " имеет наибольшую сумму = " << maxSum;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Введите количество строк матрицы: ";
	std::cin >> n;
	int m;
	std::cout << "Введите количество столбцов матрицы: ";
	std::cin >> m;
	int** matrix = new int* [n];  
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];  
	}                                      
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << "Введите элемент матрицы с индексами [" << i << "] [" << j << "]: ";
			std::cin >> matrix[i][j];
		}
	}
	std::cout << "Исходная матрица: " << std::endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << std::setw(4) << matrix[i][j];
		}
		std::cout << std::endl;
	}

	findMax(matrix, n, m);
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	return 0;
}