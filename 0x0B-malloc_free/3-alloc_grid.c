#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - create a 2d array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to 2d array
 */

#include <stdio.h>
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = (int **)malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * width);

		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(matrix[j]);
			}
			free(matrix);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	return (matrix);
}
