#include <iostream>
#include "hw2t1.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	std::cout << "������� �������� ���������� a:" << std::endl;
	std::cin >> a;
	std::cout << "������� �������� ���������� b:" << std::endl;
	std::cin >> b;
	swap(&a, &b);
	std::cout << "����� �������� � � b ����� ������ �-� swap:" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	return 0;
}