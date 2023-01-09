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
	std::cout << "�������������� ������: " << std::endl;
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

	std::cout << "������� ����������� 1 �������: " << std::endl;
	std::cin >> m;

	std::cout << "������� ����������� 2 �������: " << std::endl;
	std::cin >> n;

	int* nums1 = new int[m + n];
	int* nums2 = new int[n];

	std::cout << "������� �������� 1 �������: " << std::endl;
	for (int i = 0; i < m; i++)
	{
		std::cin >> nums1[i];
	}
	std::cout << "�������� 1-� ������: " << std::endl;
	for (int i = 0; i < m; i++)
	{
		std::cout << nums1[i] << " ";
	}
	std::cout << std::endl;


	std::cout << "������� �������� 2 �������: " << std::endl;
	for (int i = 0; i < n; i++)
	{

		std::cin >> nums2[i];
	}

	std::cout << "�������� 2-� ������: " << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << nums2[i] << " ";
	}
	std::cout << std::endl;
	merge(m, n, nums1, nums2);
	delete[] nums1, nums2;
	return 0;
}