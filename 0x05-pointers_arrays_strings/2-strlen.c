#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: that string
 * Return: the length of the given string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
		i--;
	else
	{
		while (*(s + i) != '\0')
			i++;
	}
	return (i + 1);
}
