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
	char *p;

	i = 0;
	p = NULL;

	while (s != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}

	return (p);
}
