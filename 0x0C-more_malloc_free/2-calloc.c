#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - memory allocation for array
 * @nmeb: number of array member
 * @size: size of elements
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	char *array;
	unsigned int i;
	unsigned int total_size;

	if (size == 0 || nmemb == 0)
		return (NULL);
	total_size = nmemb * size;
	array = malloc(total_size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < total_size; i++)
		array[i] = 0;
	return (array);
}
