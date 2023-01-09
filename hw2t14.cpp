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
	std::cout << "������� ���������� ���� (����������� �������): ";
	std::cin >> size_arr;
	int* prices = new int[size_arr];

	for (int i = 0; i < size_arr; i++)
	{
		std::cout << "������� ���� � [" << i+1 << "] ����: ";
		std::cin >> prices[i];
	}

	std::cout << "�������� ������: ";
	for (int i = 0; i < size_arr; i++)
	{
		std::cout << prices[i] << " ";
	}
	std::cout << std::endl;

	int profitMax = maximumProfit(prices, size_arr);
	std::cout << "������������ ������� = " << profitMax;
	delete[]prices;
	return 0;
}