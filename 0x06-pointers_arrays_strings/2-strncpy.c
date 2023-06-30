#include "main.h"

/**
 * _strncpy - copies a string, n bytes
 * @dest: the paste location
 * @src: the copy location
 * @n: the number of bytes to paste
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
