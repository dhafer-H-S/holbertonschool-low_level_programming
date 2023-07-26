#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_last_digit - check the code
 *@n: the int number
 *
 * Return: Always 0.
 */
int print_last_digit(int n)
{
int L;
L = labs(n) % 10;
_putchar('0' + L);
return (L);
}
