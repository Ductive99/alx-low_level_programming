#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @src: the string to be appended to dest
 * @dest: the resulting string
 * @n: the number of bytes to cancatenate
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
		n--;
	}
	if (src[j] != '\0')
		dest[i] = '\0';

	return (dest);
}
