#include <iostream>
#include "hw2t4.h"

void compare(double* arr, int size_arr)
{
	int count = 0;
	for (int i = 0; i < size_arr; ++i)
	{
		for (int j = size_arr - 1; j > i; --j)
		{
			if (arr[j] > arr[j - 1]) 
			{
				swap(&arr[j - 1], & arr[j]);
				++count;
			}
		}
	}
	std::cout << "Отсортированный массив: ";
	for (int i = 0; i < size_arr; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "Количество перестановок: " << count << std::endl;

}

int main()
{
	setlocale(LC_ALL, "Russian");
	int size_arr = 12;
	double* arr = new double[size_arr];

	for (int i = 0; i < size_arr; i++)
	{
		std::cout << "Введите [" << i << "] элемент массива: ";
		std::cin >> arr[i];
	}

	std::cout << "Исходный массив: ";
	for (int i = 0; i < size_arr; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << std::endl;
	compare(arr, size_arr);

	delete[]arr;
	return 0;
}