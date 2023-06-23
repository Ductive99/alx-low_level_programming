#include "main.h"

/**
 * print_line - print a line using n '_'.
 * @n: the numberof repetitions of '_'
 * REturn: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('_');
}
