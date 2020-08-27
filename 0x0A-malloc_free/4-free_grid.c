#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - free 2 dimensional array
 * @grid: grid
 * @height: height
 *
 * void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
