#include "main.h"

/**
 * print_traingle - prints a trinagle
 * @size: the numbers of lines long the triangle is
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, z;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - i - 1; j++)
				_putchar(' ');
			for (z = 0; z < size - j; z++)
				_putchar('#');

			_putchar('\n');
		}
	}
}
