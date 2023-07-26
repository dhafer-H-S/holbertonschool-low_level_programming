#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - prints elements of an array of integers
 *@a: array of ints
 *@n: amount of numbers to print
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}
