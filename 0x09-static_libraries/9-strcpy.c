#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * including the terminating null byte
 * @dest: the buffer. paste location
 * @src: the copy location
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	char *buffer = dest;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (buffer);
}
