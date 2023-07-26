#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 *
 *@s: variable of a string
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	char c;
	int len = strlen(s);

	for (i = 0; i =< len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
