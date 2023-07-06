#include "main.h"

int checker(int n, int i);

/**
 * is_prime_number - checks whether a number is prime or not
 * @n: the number to check
 * Return: 1 -> prime, 0 -> otherwise
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n < 2)
		return (0);

	return (checker(n, 3));
}

/**
 * checker - checks starting with i whether n is divisible by i
 * @n: the number to check
 * @i: the divisor
 * Return: 0 if n is divisibal by i, 1 otherwise
 */

int checker(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i > n / 2)
		return (1);

	return (checker(n, i + 2));
}
