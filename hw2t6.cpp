#include <iostream>
#include "hw2t6.h"

void change(double* arr, int size_arr)
{
	int count = 0;
	int halfSize = size_arr / 2;
	for (int i = 0; i < halfSize; i++)
	{
		swap(&arr[i], &arr[halfSize + i]);
		++count;
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
	int size_arr = 14;
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
	change(arr, size_arr);
	delete[]arr;
	return 0;

}