#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory
 * @b: size to allocate
 * Return:allocated memory or 98
 **/
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
