#include <stdlib.h>

/**
 * _realloc - reallocate memory
 * @ptr: previous memory
 * @old_size: allocated space
 * @new_size: new space
 *
 * Return: pointer to new_size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pointer;
	unsigned int i, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		pointer = malloc(new_size);
		return (pointer);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	pointer = malloc(new_size);
	if (pointer == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		pointer[i] = oldp[i];
	free(ptr);
	return (pointer);
}
