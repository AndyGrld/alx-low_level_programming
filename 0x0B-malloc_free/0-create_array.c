#include <stdio.h>
#include <stdlib.h>

/**
 * create_array: create an array of given size
 * @size: specifies size of array
 * @c: first character in array
 *
 * Return: nothing
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(sizeof(char) * size);
	array[0] = c;
	free(array);
	return (array);
}
