#include "variadic_functions.h"
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_char - function that print char
 * @arg: char
 * Return: void
 */
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * print_int - function that print a intger
 * @arg: number
 * Return: void
 */
void print_int(va_list arg)
{
	int n;

	n = va_arg(arg, int);
	printf("%d", n);
}
/**
 * print_float - function that print float
 * @arg: float of numbers
 * Return: void
 */
void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * print_string - function that print string
 * @arg: string
 * Return: void
 */
void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_all - function that print anything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, j;
	char *sep;
	print_s s[] = {
			{"c", print_char},
			{"i", print_int},
			{"f", print_float},
			{"s", print_string}
	};

	i = 0;

	sep = "";

	va_start(args, format);
		while (format != NULL && format[i])
		{
			j = 0;
			while (j <  4 && format[i] != *(s[j].symbol))
				j++;
			if (j < 4)
			{
				printf("%s", sep);
				s[j].ptr(args);
				sep = ", ";
			}
			i++;
		}
	printf("\n");
	va_end(args);


}
