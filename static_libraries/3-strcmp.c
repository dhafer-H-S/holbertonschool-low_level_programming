#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: dest
 */
int _strcmp(char *s1, char *s2)
{
int num;
for (num = 0; s1[num] != '\0' && s2[num] != '\0'; num++)
{
if (s1[num] != s2[num])
return (s1[num] - s2[num]);
}
return (0);
}
