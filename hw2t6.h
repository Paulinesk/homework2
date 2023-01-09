#pragma once

void swap(double *a, double* b)
{
	double temp = *a;
	*a = *b;
	*b = temp;
}
void change(double* arr, int size_arr);
