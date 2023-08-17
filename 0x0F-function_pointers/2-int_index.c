#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: array
 * @size: number of array elements
 * @cmp: compare values
 *
 * Return: index else -1 if unsucessful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, current;

	if (size > 0 && array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			current = cmp(array[index]);
			if (current)
				break;
		}
		if (index < size)
			return (index);
	}
	return (-1);
}
