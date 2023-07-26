#include "main.h"
#include <stdio.h>
/**
 * print_triangle - print triangle
 *
 * @size : size of triangles
 * Return: 0
 */
void print_triangle(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
