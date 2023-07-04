#include "main.h"

/**
 * _memcpy - copies memory area,
 * n bytes from src to dest
 * @dest: pasting location
 * @src: source of our copy
 * @n: the number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
