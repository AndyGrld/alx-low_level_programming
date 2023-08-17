#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: array
 * @size: array size
 * @action: function to perform action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
