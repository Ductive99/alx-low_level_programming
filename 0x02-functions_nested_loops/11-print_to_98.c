#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the number to start printing  numbers from
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		from (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				if (n > -10)
					_putchar('0' - n);
				else
				{
					_putchar('0' + (-n) / 10);
					_putchar('0' + (-n) % 10);
				}
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				if (n < 10)
					_putchar('0' + n);
				else
				{
					_putchar('0' + n / 10);
					_putchar('0' + n % 10);
				}
				if (n != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
