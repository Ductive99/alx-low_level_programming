#include "main.h"

/**
 * _strcat - concatenate two strings
 * @src: the string to be appended to dest
 * @dest: the resulting string
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *pdest = dest;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (; src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	dest[i] = '\0';

	return (pdest);
}
