#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	int len;

	i = 0;
	j = 0;

	while (*(s + i) != '\0')
		i++;

	len = i;

	char temp[len];

	for (i = i - 1; i >= 0; i--)
	{
		*(temp + j) = *(s + i);
		j++;
	}
	for (j = 0; j < len; j++)
		*(s + j) = *(temp + j);
}
