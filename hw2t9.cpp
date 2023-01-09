#include <iostream>
#include "hw2t9.h"


void sort(int* arr, int size_arr)
{
	for (int i = 0; i < size_arr; ++i)
	{
		for (int j = size_arr - 1; j > i; --j)
		{
			if (arr[j] > arr[j - 1])
			{
				swap(&arr[j - 1], &arr[j]);
			}
		}
	}
	for (int i = 0; i < size_arr; ++i)
	{
		for (int j = size_arr - 1; j > i; --j)
		{
			if (arr[j] <= 0 && arr[j] < arr[j - 1])
			{
				swap(&arr[j - 1], &arr[j]);
			}
		}
	}

	std::cout << "Отсортированный массив: ";
	for (int i = 0; i < size_arr; i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int size_arr = 15;
	int* arr = new int[size_arr];

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
	sort(arr, size_arr);

	delete[]arr;
	return 0;
}