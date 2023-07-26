#include"main.h"
/**
 * create_array - creat an array of chars
 * @size: size of the array
 * @c: char
 *
 * Return: 0
 *
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	i = 0;
	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
