#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include "task7.h"
using namespace std;

void countLocMin(int* Arr)
{
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		if (i == 0 && Arr[i] < Arr[i + 1]) count++;
		else if (i > 0 && i < 10 - 1 && Arr[i] < Arr[i - 1] && Arr[i] < Arr[i + 1]) count++;
		else if (i == 10 - 1 && Arr[i] < Arr[i - 1]) count++;
	}
	cout << "Количество локальных минимумов: " << count << endl;
}
int main()
{
	setlocale(LC_ALL, "");
	int* Arr;
	Arr = new int[10];
	srand(time(NULL));
	int num;
	for (int i = 0; i < 10; i++)
	{
		num = rand() % 99 + 1;
		Arr[i] = num;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << Arr[i] << " ";
	}
	cout << endl;
	countLocMin(Arr);
	delete[]Arr;
	return 0;
}