#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - find and print the largest prim efactor of 612852475143
 * Return: 0
 */

int main(void)
{
	long i, largest;
	long n;

	n = 612852475143;
	largest = 1;

	for (i = 3; i < n / 2; i = i + 2)
	{
		if (n % i == 0)
		{
			largest = i;
			n = n / i;
		}
	}
	if (largest == 1)
		printf("%ld\n", n);
	else
		printf("%ld\n", n);

	return (0);
}
