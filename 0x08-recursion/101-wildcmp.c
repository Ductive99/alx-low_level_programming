#include "main.h"

/**
 * wildcmp - compares 2 strings
 * @s1: the 1st string
 * @s2: the 2nd string
 * Return: 1 if identical, 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 != *s2 && *s2 != '*')
		return (0);

	return (wildmp(s1 + 1, s2 + 1));
}
