#include <stddef.h>
#include "main.h"

/**
 * create_array - creates an array of a specific char
 * @size: the size of the array
 * @c: the character to fill the array with
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
