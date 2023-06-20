#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * Return: 0
 */
void times_table(void)
{
	int n1;
	int n2;

	for (n1 = 0; n < 10; n++)
	{
		for (n2 =  0; n < 10; n++)
		{
			if (n1 * n2 < 10)
				_putchar('0' + n1 * n2);
			else
			{
				_putchar('0' + (n1 * n2) / 10);
				_putchar('0' + (n1 * n2) % 10);
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
