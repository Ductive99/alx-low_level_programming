#include "function_pointers.h"

/**
 * array_iterator - executes a given function on each element of an array
 *
 * @array: the array to executes the function onto
 * @size: the size of the array
 * @action: pointer to the function to execute
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		exit(0);

	if (action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
