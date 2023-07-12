#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * free_grid - frees a 2d grdi created by alloc_grid (Task 3)
 * @grid: pointer to the grid
 * @height: the height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i, j;

	if (height <= 0)
		return;

	free(grid);

	for (i = 0; i < height; i++)
	{
		if (grid[i] != 0 && grid[i + 1] != 0)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
				if (j == i - 1)
					return;
			}
		}
	}
}

