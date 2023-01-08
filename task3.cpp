#include <iostream>
using namespace std;

int main(void) {
	setlocale(LC_ALL, "Russian");
	double **p = 0;
	*(*(p = new double*) = new double) = 2;
	cout << "Число в квадратике: " << **p << endl;
	delete *p;
	delete p;
}