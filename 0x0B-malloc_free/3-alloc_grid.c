#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * alloc_grid - returns a 2 dimensional array of integers
 * Each element of the grid should be initialized to 0
 * @width: width of the array
 * @height: height of the array
 * Return: NULL on failure or if width or height are 0 or less
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(width * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
