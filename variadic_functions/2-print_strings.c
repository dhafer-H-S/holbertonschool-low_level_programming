#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @n: number
 * @separator: pointer of the string
 * Return: the sum
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	char *STRING;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		STRING = va_arg(args, char*);


		if (STRING == NULL)
			printf("%s", "(nil)");
		else

			printf("%s", STRING);

		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
