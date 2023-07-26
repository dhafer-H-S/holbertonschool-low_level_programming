#include "search_algos.h"
/**
 * linear_search - function that search for a value in array
 * @array: array
 * @size: size of array
 * @value: value in the index or -1
 *
 * Return: the index value or -1
 */

int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
