#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b : unsigned integer
 *
 * Return: allocated memory for b
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
