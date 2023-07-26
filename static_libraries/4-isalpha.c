#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check the code.
 * @c: the character
 * Return: 1 in success or 0 in failed
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
