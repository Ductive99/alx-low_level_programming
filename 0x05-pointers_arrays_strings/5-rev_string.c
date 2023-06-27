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
	char temp;

	i = 0;
	j = 0;

	while (s[i] != '\0')
		i++;

	j = i - 1;


	for (len = 0; len < i / 2; i++)
	{
		temp = s[len];
		s[len] = s[j];
		s[j--] = temp;
	}
}
