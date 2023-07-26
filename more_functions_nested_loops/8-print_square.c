#include "main.h"
#include <stdio.h>
/**
 * print_square - print more squares
 *
 * @size : size squares
 * Return: 0
 */
void print_square(int size)
{
int n, i;
if (size > 0)
{
for (n = 0 ; n < size ; n++)
{
for (i = 0; i < size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
