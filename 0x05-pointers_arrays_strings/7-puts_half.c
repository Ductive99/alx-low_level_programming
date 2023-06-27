#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
		len++;

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
