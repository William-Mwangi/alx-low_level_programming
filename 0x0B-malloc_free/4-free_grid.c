#include <stdlib.h>
#include "main.h"

/**
 * free_grid - use of free function
 * @grid: the 2d array
 * @height: col of the array
 * Return: nothing
 */


void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

