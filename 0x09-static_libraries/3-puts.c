#include "main.h"

/**
 * _puts - prints a string, followed by a mew line
 * to stdout
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
