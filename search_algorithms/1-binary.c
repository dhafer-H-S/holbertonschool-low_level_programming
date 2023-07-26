#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * @array: array
 * @size: size of array
 * @value: value to search it
 * Return: index or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, start = 0, end = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = (end + start) / 2;
		i = start;
		printf("Searching in array: ");

		while (i <= end)
		{
			if (i != start)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
			i++;
		}
		printf("\n");
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
