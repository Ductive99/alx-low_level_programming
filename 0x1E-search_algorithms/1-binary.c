#include "search_algos.h"

/**
 * rec_search - recursively search for a value in a array
 *
 * @array: array to search in.
 * @size: of @array.
 * @value: value to look for.
 *
 * Return: index.
 */
int rec_search(int *array, size_t size, int value)
{
	size_t m = size / 2;
	size_t i;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (m && size % 2 == 0)
		m--;

	if (value == array[m])
		return ((int)m);

	if (value < array[m])
		return (rec_search(array, m, value));

	m++;

	return (rec_search(array + m, size - m, value) + m);
}

/**
 * binary_search - implements a binary search
 *
 * @array: pointer to the first element of the array to search in.
 * @size: size of @array.
 * @value: value to search for in @array.
 *
 * Return: 1st index where @value is located, else return (-1).
 */
int binary_search(int *array, size_t size, int value)
{
	int idx;

	idx = rec_search(array, size, value);

	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}
