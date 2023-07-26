#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _prime -  chech if the number is a prime
 * @n: number
 * @i: number
 *
 * Return: 1 or 0
 */

int _prime(int n, int i)
{
	if (n <= 1)
	{
	return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
		{
		return (1);
	}
	return (_prime(n, i + 1));
}

/**
 * is_prime_number -  chech if the number is a prime
 * @n: number
 *
 *
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
return (_prime(n, 1));
}
