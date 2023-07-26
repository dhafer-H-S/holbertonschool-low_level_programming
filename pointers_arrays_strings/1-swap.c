#include "main.h"
#include <stdio.h>

/**
 * swap_int - a parameter to swap two integers
 *
 * @a: variable a
 * @b: variable b
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int i;
i = *b;
*b = *a;
*a = i;
}
