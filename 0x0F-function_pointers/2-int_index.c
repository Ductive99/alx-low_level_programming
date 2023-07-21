#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: the pool of numbers
 * @size: the number of numbers to look into
 * @cmp: pointer to the function to compare values
 *
 * Return: index of the first element for which cmp return != 0
 * no element found -> return -1
 * if size <= 0 -> return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
