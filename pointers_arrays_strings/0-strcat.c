#include "main.h"
#include<stdio.h>
/**
 * _strcat - concatenates two strings
 *
 *@dest: sting one
 *@src: string two
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

while (dest[i] != '\0')
i++;

while (*src != '\0')
dest[i++] = *src++;
dest[i] = '\0';
return (dest);
}
