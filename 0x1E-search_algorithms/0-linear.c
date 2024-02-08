#include "search_algos.h"


/**
 * linear_search - implements a linear search
 *
 * @array: pointer to the first element of the array to search in.
 * @size: number of elements in @array.
 * @value: value to search for
 *
 * Return: 1st index where @value is located, else return (-1).
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
