#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * Return: a pointer to a newly allocated space
 * containing the contents of s1 followed by s2 and null terminated
 * NULL on failure
 * if NULL is passed treat it as an empty string
 */

char *str_concat(char *s1, char *s2)
{
	int i1, i2, i;
	char *p;

	i1 = 0;
	i2 = 0;

	if (s1 != NULL)
	{
		while (s1[i1] != '\0')
			i1++;
	}

	if (s2 != NULL)
	{
		while (s2[i2] != '\0')
			i2++;
	}

	p = malloc(sizeof(char) * (i1 + i2 + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < i1 + i2; i++)
	{
		if (i < i1)
			p[i] = s1[i];
		else
			p[i] = s2[i];
	}

	p[i] = '\0';

	return (p);
}
