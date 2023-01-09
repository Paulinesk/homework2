#include <iostream>
#include "leetcode15.h"

void pascalTriangle(int numRows)
{
	for (int i = 0; i < numRows; i++)
	{
		int value = 1;
		std::cout << "[";
		for (int j = 0; j <= i; j++)
		{
			if (j != i)
			{
				std::cout << value << ", ";

			}
			else
			{
				std::cout << value;
			}
			value = value * (i - j) / (j + 1);
		}
		std::cout << "] ";
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	int numRows;
	std::cout << "Введите количество строк треугольника Паскаля: ";
	std::cin >> numRows;
	pascalTriangle(numRows);
	return 0;
}