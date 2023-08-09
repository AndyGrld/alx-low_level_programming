#include <stdlib.h>

/**
 * free_grid - free the memory of 2d array create by alloc_grid
 * @grid: pointer to the 2D grid
 * @height: number of rows
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0 || grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
