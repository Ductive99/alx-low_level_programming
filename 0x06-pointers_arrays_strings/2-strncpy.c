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

	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	if (src[i] == '\0' && n > 0)
	{
		dest[i] = '\0';
	}

	return (dest);
}
