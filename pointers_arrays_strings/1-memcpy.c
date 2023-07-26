#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory from a memory area to an other area
 *
 * @dest: char point
 * @src: char
 * @n: number of bytes
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	dest[i] = src[i];
}

	return (dest);
}
