#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, if the function fails - NULL.
 *         Otherwise - a pointer to 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **dimension;
	int heightindex, widthindex;

	if (width <= 0 || height <= 0)
		return (NULL);

	dimension = malloc(sizeof(int *) * height);

	if (dimension == NULL)
		return (NULL);

	for (heightindex = 0; heightindex < height; heightindex++)
	{
		dimension[heightindex] = malloc(sizeof(int) * width);

		if (dimension[heightindex] == NULL)
		{
			for (heightindex = 0; heightindex--;)
			{	free(dimension[heightindex]);

			free(dimension);
			}
			return (NULL);
		}
	}
	for (heightindex = 0; heightindex < height; heightindex++)
	{
		for (widthindex = 0; widthindex < width; widthindex++)
			dimension[heightindex][widthindex] = 0;
	}

	return (dimension);
}
