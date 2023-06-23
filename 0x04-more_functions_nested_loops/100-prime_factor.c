#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - find and print the largest prim efactor of 612852475143
 * Return: 0
 */

int main(void)
{
	long i, largest_prime_factor;
	long n;

	n = 612852475143;
	largest_prime_factor = 1;

	for (i = 1; i < sqrt(n); i++)
	{
		if (i % n == 0)
			largest_prime_factor = i;
	}
	if (largest_prime_factor == 1)
		printf("%ld\n", n);
	else
		printf("%ld\n", largest_prime_factor);

	return (0);
}
