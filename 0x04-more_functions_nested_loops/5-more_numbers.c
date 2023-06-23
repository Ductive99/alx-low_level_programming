#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14.
 * Return: void
 */

void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 10; i++)
	{
		for(a = 0; a <= 14; a++)
		{
			if (a > 10)
				_putchar('0' + a / 10);

			_putchar('0' + a % 10);
		}
		_putchar('\n');
	}
}
