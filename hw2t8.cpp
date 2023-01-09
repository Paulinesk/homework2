#include <iostream>
#include <iomanip>
#include "hw2t8.h"

void findSum(int** matrix, int n, int m)
{
	int sum = 0;
	int i = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			while (matrix[i][j++])
				;
			while (matrix[i][j])
				sum += matrix[i][j++];

		}
		std::cout << "����� ��� ������ " << i << " = " << sum << std::endl;
		sum = 0;
	}
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "������� ���������� ����� �������: ";
	std::cin >> n;
	int m;
	std::cout << "������� ���������� �������� �������: ";
	std::cin >> m;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[m];
	}
	std::cout << "��������� ������� � ������ ����, ��� � ������ ������ ������ ���� 2 � ������ 2 ���������� ������� ��������." << std::endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << "������� ������� ������� � ��������� [" << i << "] [" << j << "]: ";
			std::cin >> matrix[i][j];
		}
	}
	std::cout << "�������� �������: " << std::endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			std::cout << std::setw(4) << matrix[i][j];
		}
		std::cout << std::endl;
	}

	findSum(matrix, n, m);
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}
	return 0;
}