#include <iostream>
#include "hw2t10.h"

void changeMax(double* arr1, double* arr2, int size_arr1, int size_arr2)
{
	double max1 = arr1[0];
	for (int i = 0; i < size_arr1; i++)
	{
		if (arr1[i] > max1)
		{
			max1 = arr1[i];
		}
	}
	double max2 = arr2[0];
	for (int j = 0; j < size_arr2; j++)
	{
		if (arr2[j] > max2)
		{
			max2 = arr2[j];
		}
	}
	std::cout << "1-й массив после перестановки: ";
	for (int i = 0; i < size_arr1; i++)
	{
		if (arr1[i] == max1)
		{
			arr1[i] = max2;
		}
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "2-й массив после перестановки: ";
	for (int j = 0; j < size_arr2; j++)
	{
		if (arr2[j] == max2)
		{
			arr2[j] = max1;
		}
		std::cout << arr2[j] << " ";
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int size_arr1;
	std::cout << "¬ведите размерность 1-го массива: ";
	std::cin >> size_arr1;
	double* arr1 = new double[size_arr1];

	for (int i = 0; i < size_arr1; i++)
	{
		std::cout << "¬ведите [" << i << "] элемент 2-го массива: ";
		std::cin >> arr1[i];
	}

	std::cout << "»сходный 1-й массив: ";
	for (int i = 0; i < size_arr1; i++)
	{
		std::cout << arr1[i] << " ";
	}
	std::cout << std::endl;

	int size_arr2;
	std::cout << "¬ведите размерность 2-го массива: ";
	std::cin >> size_arr2;
	double* arr2 = new double[size_arr2];

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

	changeMax(arr1, arr2, size_arr1, size_arr2);

	delete[]arr1;
	delete[]arr2;
	return 0;
}