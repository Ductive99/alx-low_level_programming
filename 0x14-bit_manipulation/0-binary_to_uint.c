#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string of 0's & 1's
 *
 * Return: the conversion result
 * or 0 if:
 * - there is a character different than 0 and 1
 * - b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, a;
	int len, i, j;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		a = 1;
		if (b[i] == '1')
		{
			for (j = 1; j < len - i; j++)
				a *= 2;
			result += a;
		}
		else if (b[i] != '0')
			return (0);
	}

	return (result);
}

/**
 * _strlen - calculates the length of  a given string
 * @s: the string
 * Return: the length of that string
 */

int _strlen(const char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}
