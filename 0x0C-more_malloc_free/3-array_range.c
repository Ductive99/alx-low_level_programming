#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * the array contains all the values from @min to @max
 * @min: the first int of the array
 * @max: the last int of the array
 * Return: the pointer to the newly creatd array
 * if min > max,    return NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < max - min + 1; i++)
		p[i] = min + i;

	return (p);
}
