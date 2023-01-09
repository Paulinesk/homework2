#include <iostream>
#include "hw2t2.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	std::cout << "Введите целое число n (размерность массива):" << std::endl;
	std::cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cout << "Введите [" << i << "] элемент массива: ";
		std::cin >> a[i];
	}

	std::cout << "Исходный массив: ";
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}

	std::cout << std::endl;

	int* pa = a;
	int* pla = a + n - 1;
	swap(pa, pla);

	std::cout << "Получившийся массив: ";
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i] << " ";
	}

	delete[]a;
	return 0;
}