#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of given size
 * @size: specifies size of array
 * @c: first character in array
 *
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);

	if (array == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
