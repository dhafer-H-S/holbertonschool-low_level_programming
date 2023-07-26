#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strncat - concatenates two strings
 *
 *@dest: string one
 *@src: string two
 *@n: bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *i;

i = dest + strlen(dest);
while (*src != '\0' && n--)
	*i++ = *src++;
*i = '\0';
return (dest);
}
