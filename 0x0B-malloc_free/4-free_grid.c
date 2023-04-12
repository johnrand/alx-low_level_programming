#include <stdlib.h>
#include "main.h"

/**
 * free_grid - fress the 2 dimentional gri created
 * @grid: 2 dimentional grid created
 * @height: height of the array
 *
 * Return: void
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
