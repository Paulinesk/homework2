#include <iostream>
#include "leetcode13.h"
void merge(int m, int n, int* nums1, int* nums2)
{
	int i = m - 1, j = n - 1, k = m + n - 1;
	while (i >= 0 && j >= 0)
	{
		if (nums1[i] > nums2[j])
		{
			nums1[k] = nums1[i];
			k--;
			i--;
		}
		else
		{
			nums1[k] = nums2[j];
			k--;
			j--;

		}
	}

	while (j >= 0)
	{
		nums1[k--] = nums2[j--];
	}
	std::cout << "–езультирующий массив: " << std::endl;
	for (int i = 0; i < m + n; i++)
	{
		std::cout << nums1[i] << " ";
	}
	std::cout << std::endl;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int m, n;

	std::cout << "¬ведите размерность 1 массива: " << std::endl;
	std::cin >> m;

	std::cout << "¬ведите размерность 2 массива: " << std::endl;
	std::cin >> n;

	int* nums1 = new int[m + n];
	int* nums2 = new int[n];

	std::cout << "¬ведите элементы 1 массива: " << std::endl;
	for (int i = 0; i < m; i++)
	{
		std::cin >> nums1[i];
	}
	std::cout << "»сходный 1-й массив: " << std::endl;
	for (int i = 0; i < m; i++)
	{
		std::cout << nums1[i] << " ";
	}
	std::cout << std::endl;


	std::cout << "¬ведите элементы 2 массива: " << std::endl;
	for (int i = 0; i < n; i++)
	{

		std::cin >> nums2[i];
	}

	std::cout << "»сходный 2-й массив: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << nums2[i] << " ";
	}
	std::cout << std::endl;
	merge(m, n, nums1, nums2);
	delete[] nums1, nums2;
	return 0;
}