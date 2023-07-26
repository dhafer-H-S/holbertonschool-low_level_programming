#include "main.h"
#include <stdio.h>
/**
 * print_numbers - print numbers 0-9
 *
 * Return: void
 */
void print_numbers(void)
{
int t = 0;
while (t <= 9)
{
_putchar(t + '0');
t++;
}
_putchar('\n');

}
