#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _realloc - reallocates a block of memory using malloc & free
 * @ptr: pointer to the previously allocated space
 * @old_size: the size of the memory block in bytes
 * @new_size: the new size of the memory block in bytes
 * Return: a pointer to the new mwmory block
 * if new_size > old_size the added memory should not be initialized
 * if new_size == old_size do nothing besides returning ptr
 * if ptr is NULL then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 * if new_size == 0 and ptr != NULL then the call is equivalent to,
 * free(ptr) return NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	void *new;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
	{
		if (i < old_size)
			*(new + i) = *(ptr + i);
	}
	free(ptr);

	return (new);

}
