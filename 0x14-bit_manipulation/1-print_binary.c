#include "main.h"

/**
 * print_binary - prints a number in binary
 *
 * @n: the number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bitCount = sizeof(unsigned long int) * 8;
	int leadingZero = 1, i;
    
	for (i = bitCount - 1; i >= 0; i--)
	{
		unsigned long int mask = 1ul << i;
		if ((n & mask) || !leadingZero) 
		{
			leadingZero = 0;
			_putchar((n & mask) ? '1' : '0');
		}
	}

	if (leadingZero)
		_putchar('0');
}
