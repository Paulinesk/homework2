#pragma once

int maximumProfit(int* prices, int size_arr);

int max(int *a, int *b)
{
    if (*a > *b)
        return *a;
    else
        return *b;
}