#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * concatenates @s1 with the first @n bytes of @s2
 * @s1: the 1st string
 * @s2: the 2nd string
 * @n: the number of bytes two concatenate from @s2
 * Return: a pointer to a newly allocated space in memory
 * of the concatenated string
 * if function fails return NULL
 * n > strlen(s2), the entire string is used
 * if NULL is passed, treated as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j, k;
	char *res;

	i = j = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
			i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
			j++;
	}

	if (n < j + 1)
		j = n - 1;

	res = malloc((i + j + 1) * sizeof(*res));
	if (res == NULL)
		return (NULL);

	for (k = 0; k < i + j; k++)
	{
		if (k < i)
			res[k] = s1[k];
		else
			res[k] = s2[k - i];
	}

	res[k] = '\0';

	return (res);
}
