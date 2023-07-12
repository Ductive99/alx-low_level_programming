#include <stdlib.h>
#include <stddef.h>
#include "main.h"

int word_counter(char *s);

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words)
 * NULL if str == NULL or str == ""
 * NULL if the function fails
 */

char **strtow(char *str)
{
	int i, j, k, z, n;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	n = word_counter(str);

	words = malloc(sizeof(char *) * (n + 1));
	if (words == NULL)
		return (NULL);

	for (i = j = 0; i < n; i++)
	{
		for (k = j; str[k] != '\0'; k++)
		{
			if (str[k] == ' ')
				j++;
			if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			{
				words[i] = malloc((k - j + 2) * sizeof(char));
				if (words[i] == NULL)
					return (NULL);
				break;
			}
		}
		for (z = 0; j <= k; j++, z++)
			words[i][z] = str[j];
		words[i][z] = '\0';
	}
	words[i] = NULL;
	return (words);
}

/**
 * word_counter - counts words
 * @s: the string to count its words
 * Return: the number of words
 */

int word_counter(char *s)
{
	int i, count;

	i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && s[i] != ' ')
			count++;

		if (i > 0 && s[i - 1] == ' ' && s[i] != ' ')
			count++;

		i++;
	}

	return (count);

}
