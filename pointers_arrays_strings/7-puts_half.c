#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - check the code
 *
 * @s: a parameter to returns the length of a string
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
	i++;
	s++;
	}
	return (i);
}
/**
 * puts_half - prints half of a string
 *
 *@str: variable of a string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = len / 2 + 1;
	}

	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
