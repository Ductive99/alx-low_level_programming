#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of a given string
 * @str: the string to be copied
 * Return: NULL if str = NULL
 * On success, returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	int i, len;
	char *new;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	len = i;

	new = malloc(sizeof(char) * len);
	if (new == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		new[i] = str[i];

	return (new);
}
