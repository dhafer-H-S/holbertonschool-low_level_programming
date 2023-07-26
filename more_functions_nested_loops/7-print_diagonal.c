#include "main.h"

/**
 * print_diagonal - print diagonal
 * @n: number of diogonal lines
 * Return: void.
 */
void print_diagonal(int n)
{
int i, k;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (k = 0; k < i; k++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
