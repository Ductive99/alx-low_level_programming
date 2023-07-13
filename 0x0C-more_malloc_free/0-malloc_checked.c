#include <stdllib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: a pointer ot the allocated memory
 * if malloc fails, cause normal process termination
 * with status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
