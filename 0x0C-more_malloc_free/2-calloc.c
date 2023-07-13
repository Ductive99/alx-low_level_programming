#include <stdlib.h>
#include <stdedf.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: byte size of each elements
 * Return: pointer to the allocated memory
 * if nmemb or size is 0, then _calloc returns NULL
 * if malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
