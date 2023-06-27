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

	while (s[len] != '\0')
		len++;

	j = len - 1;


	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j--] = temp;
	}
}
