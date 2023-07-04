#include "main.h"

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

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);

		i++;
	}

	return (NULL);
}
