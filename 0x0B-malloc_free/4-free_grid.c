#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - func to free already allocated memory.
 * @grid: grid parameter.
 * @height: height parameter
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
