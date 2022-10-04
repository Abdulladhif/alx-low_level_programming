#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by your
 *	alloc_grid function.
 * @grid: array of integers to be freed.
 * @height: The height of grid.
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int j = 0;

	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
