#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check the code.
 * @c: the digit
 * Return: 1 in success otherwise 0
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
