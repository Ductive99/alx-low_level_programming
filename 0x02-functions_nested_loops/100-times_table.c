#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n; 0 < n <= 15
 * Return: 0
 */
void print_times_table(int n)
{
	int n1;
	int n2;

	if (n >= 0 && n <= 15)
	{
		for (n1 = 0; n1 <= n; n1++)
		{
			for (n2 =  0; n2 <= n; n2++)
			{
				if (n1 * n2 < 10)
				{
					if (n2 > 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + n1 * n2);
				}
				else if (n1 * n2 < 100)
				{
					_putchar('0' + (n1 * n2) / 10);
					_putchar('0' + (n1 * n2) % 10);
				}
				else
				{
					_putchar('0' + (n1 * n2) / 100);
					_putchar('0' + (n1 * n2) % 100);
					_putchar('0' + (n1 * n2) % 10);
				}
				if (n2 < n - 1)
				{
					_putchar(',');
				_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
