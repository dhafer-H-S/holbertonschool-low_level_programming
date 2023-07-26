#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - print and reverse a string
 *
 *@s: variable of a string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
