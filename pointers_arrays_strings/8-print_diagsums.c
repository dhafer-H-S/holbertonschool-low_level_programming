#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_diagsums - print diagsums
 * @a: array
 * @size: size of the matrix
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, i;

	for (i = 0; i < size * size; i += size + 1)
	{
		d1 += a[i];
	}
	{
		for (i = size - 1; i <= size * (size - 1); i += size - 1)
		{
			d2 += a[i];
		}
		printf("%d, %d\n", d1, d2);
	}
}
