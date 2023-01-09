#include <iostream>
#include "hw2t5.h"

void resultArray(int* arr, int size_arr)
{
	int* res = new int[size_arr];
	for (int i = 0, left = 0, right = size_arr; i < size_arr; ++i)
	{
		if (arr[i] < 0)
		{
			res[left++] = arr[i];
		}
		if (arr[size_arr - i - 1] >= 0)
		{
			res[--right] = arr[size_arr - i - 1];
		}
	}
	std::cout << "–езультирующий массив: ";
	for (int i = 0; i < size_arr; i++)
	{
		std::cout << res[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int size_arr1;
	std::cout << "¬ведите размерность 1-го массива: ";
	std::cin >> size_arr1;
	int* arr1 = new int[size_arr1];

	for (int i = 0; i < size_arr1; i++)
	{
		std::cout << "¬ведите [" << i << "] элемент 1-го массива: ";
		std::cin >> arr1[i];
	}

	std::cout << "»сходный 1-й массив: ";
	for (int i = 0; i < size_arr1; i++)
	{
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;
	resultArray(arr1, size_arr1);

	int size_arr2;
	std::cout << "¬ведите размерность 2-го массива: ";
	std::cin >> size_arr2;
	int* arr2 = new int[size_arr2];

	for (int i = 0; i < size_arr2; i++)
	{
		std::cout << "¬ведите [" << i << "] элемент 2-го массива: ";
		std::cin >> arr2[i];
	}

	std::cout << "»сходный 2-й массив: ";
	for (int i = 0; i < size_arr2; i++)
	{
		std::cout << arr2[i] << " ";
	}
	std::cout << std::endl;
	resultArray(arr2, size_arr2);

	int size_arr3;
	std::cout << "¬ведите размерность 3-го массива: ";
	std::cin >> size_arr3;
	int* arr3 = new int[size_arr3];

	for (int i = 0; i < size_arr3; i++)
	{
		std::cout << "¬ведите [" << i << "] элемент 3-го массива: ";
		std::cin >> arr3[i];
	}

	std::cout << "»сходный 3-й массив: ";
	for (int i = 0; i < size_arr3; i++)
	{
		std::cout << arr3[i] << " ";
	}
	std::cout << std::endl;
	resultArray(arr3, size_arr3);

	delete[]arr1;
	delete[]arr2;
	delete[]arr3;
	return 0;
}