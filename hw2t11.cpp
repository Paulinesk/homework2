#include <iostream>
#include <iomanip>

void shiftRight(int** matrix, int n, int m)
{
	for (int j = m-1; j > 0; j--)
		for (int i = 0; i < n; i++)
		{
			int t = matrix[i][j];
			matrix[i][j] = matrix[i][j - 1];
			matrix[i][j - 1] = t;
		}
	std::cout << "Матрица после сдвига: " << std::endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << std::setw(4) << matrix[i][j];
		}
		std::cout << std::endl;
	}
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
	shiftRight(matrix, n, m);

	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	return 0;
}