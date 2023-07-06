#include "main.h"

int length(char *s);
int checker(char *s, int i, int l);

/**
 * is_palindrome - checks for palindrome strings
 * @s: the string to check
 * Return: 1 if the string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len;

	len = length(s);

	if (*s == '\0')
		return (1);

	return (checker(s, 0, len));
}

/**
 * length - computes the length of a string
 * @s: the string
 * Return: the length of the string
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + length(s + 1));
}

/**
 * checker - checks for palindrome
 * @s: the string to check
 * @i: iterator
 * @l: length of the string
 * Return: same as is_palindrome
 */

int checker(char *s, int i, int l)
{
	if (*(s + i) != *s + l - 1)
		return (0);
	if (i >= l)
		return (1);

	return (checker(s, i + 1, l - 1));
}
