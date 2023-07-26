#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print more numbers
 *
 * Return: 0
 */
void more_numbers(void)
{
char i;
int n;
for (n = 0 ; n < 10 ; n++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
_putchar((i / 10) + '0');
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}
