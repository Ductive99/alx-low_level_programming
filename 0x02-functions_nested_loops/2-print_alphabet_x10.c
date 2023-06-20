#include "main.h"

/**
 * print_alphabet_x10 - prints the aplphabet 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
