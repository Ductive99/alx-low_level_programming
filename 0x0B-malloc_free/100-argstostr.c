#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: the arguments
 * Return: NULL if ac == 0 or av == NULL
 * a pointer to a new string or NULL if it fails
 * Each argument should be followed by \n
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	len = 0;
	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;

		len += j + 1;
	}

	str = malloc((sizeof(char) * len) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			str[k] = av[i][j];
			j++;
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
