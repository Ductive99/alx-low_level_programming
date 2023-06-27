#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i, len;
	int odd;

	len = 0;
	odd = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 1)
		odd++;

	for (i = len / 2 + odd; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
