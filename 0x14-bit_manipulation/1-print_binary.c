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
	int bitCount = sizeof(unsigned int) * 8;
	int leadingZero = 1;
    
	for (int i = bitCount - 1; i >= 0; i--)
	{
		unsigned int mask = 1u << i;
		if ((num & mask) || !leadingZero) 
		{
			leadingZero = 0;
			_putchar((num & mask) ? '1' : '0');
		}
	}

	if (leadingZero)
		_putchar('0');
}
