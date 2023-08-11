#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - memory allocation for array
 * @nmemb: number of array member
 * @size: size of elements
 *
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	unsigned int i;
	unsigned int total_size = nmemb * size;
	void *ptr = malloc(total_size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	char *byte_ptr = (char *)ptr;

	for (i = 0; i < total_size; i++)
	{
		byte_ptr[i] = 0;
	}

	return (ptr);
}
