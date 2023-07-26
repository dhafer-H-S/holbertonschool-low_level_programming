#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse an array
 *@a: the array
 *@n: number of elements of the array
 *
 *  Return: Always 0.
 */

void reverse_array(int *a, int n)
{
int i, b;

for (i = 0; i < n; i++)
{
n--;
b = a[i];
a[i] = a[n];
a[n] = b;
}
}
