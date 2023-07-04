#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to look for
 * Return: a pointer
 * to the first occurence of the character c in the string s,
 * NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);

		if (i == 0)
			return (NULL);
	}
}
