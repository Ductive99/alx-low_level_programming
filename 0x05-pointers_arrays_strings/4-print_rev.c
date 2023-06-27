#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: the string to reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
		i++;
	if (i > 0)
	{
		for (; i >= 0; i--)
			_putchar(*(s + i));
	}
	_putchar('\n');
}
