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

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}
