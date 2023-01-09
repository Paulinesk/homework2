#include <iostream>
#include "hw2t1.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	std::cout << "Введите значение переменной a:" << std::endl;
	std::cin >> a;
	std::cout << "Введите значение переменной b:" << std::endl;
	std::cin >> b;
	swap(&a, &b);
	std::cout << "Вывод значений а и b после вызова ф-и swap:" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	return 0;
}