#include <stdio.h>


void diff(double *arr, size_t n)
{
    for (int i=0; i<n-1; i++)
        arr[i] = arr[i+1] - arr[i];
    arr[n] = arr[n-1];
}

void inte(double *arr, size_t n)
{
    for (int i=1; i<n; i++)
        arr[i] += arr[i-1];
}