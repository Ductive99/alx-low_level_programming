#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: void
 */
int size(char *s);

void rev_string(char *s)
{
	int i, j;
	int len;
	char temp[size(s)];

	i = 0;
	j = 0;

	len = size(s);


	for (i = i - 1; i >= 0; i--)
	{
		*(temp + j) = *(s + i);
		j++;
	}
	for (j = 0; j < len; j++)
		*(s + j) = *(temp + j);
}

/**
 * size - returns the length of a string
 * @s: that string
 * Return: the strings length
 */

int size(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
