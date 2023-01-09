#pragma once

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void sort(int* arr, int size_arr);