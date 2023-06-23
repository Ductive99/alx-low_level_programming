#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * prime_checker - checks if a number is prime
 * @num: the num to check
 * Return: 1 if prime , 0 if not
 */

int prime_checker(long num)
{
	long i, factor;

	for (i = 2; i < sqrt(num); i++)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}

/**
 * main - find and print the largest prim efactor of 612852475143
 * Return: 0
 */

int main(void)
{
	long i, prime_factor;
	long n;

	n = 612852475143;
	prime_factor = 1;

	for (i = 2; i < n / 2; i++)
	{
		if (n % i == 0)
		{
			if (prime_checker(i) == 1)
				prime_factor = i;
		}
	}
	if (prime_factor == 1)
		printf("%ld\n", n);
	else
		printf("%ld\n", prime_factor);

	return (0);
}
