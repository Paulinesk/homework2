#include <iostream>
#include "hw2t14.h"

int maximumProfit(int* prices, int size_arr)
{
	int profitMax = 0;
	for (int i = 0; i < size_arr; i++) {
		for (int j = i + 1; j < size_arr; j++) {
			if (prices[j] > prices[i]) {
				int delta = prices[j] - prices[i];
				profitMax = max(&delta, &profitMax);
			}
		}
	}

	return profitMax;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int size_arr;
	std::cout << "Введите количество дней (размерность массива): ";
	std::cin >> size_arr;
	int* prices = new int[size_arr];

	for (int i = 0; i < size_arr; i++)
	{
		std::cout << "Введите цену в [" << i+1 << "] день: ";
		std::cin >> prices[i];
	}

	std::cout << "Исходный массив: ";
	for (int i = 0; i < size_arr; i++)
	{
		std::cout << prices[i] << " ";
	}
	std::cout << std::endl;

	int profitMax = maximumProfit(prices, size_arr);
	std::cout << "Максимальная прибыль = " << profitMax;
	delete[]prices;
	return 0;
}