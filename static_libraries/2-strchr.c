#include "main.h"
#include <stdio.h>
/**
 * _strchr -  locates a character in a string
 *
 * @c: char point
 * @s: char
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	char *position = NULL;
	int i = 0;

	if (c != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == c)
			{
				position = &s[i];
				break;
			}
		}
		return (position);
	}
	else
	{
		return ("");
	}
}
