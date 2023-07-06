#include "main.h"

/**
 * check - compares the square of i to n
 * @n: the number to check
 * @i: the coefficient that increments by 1
 * Return: -1 if i squared suprpasses n
 * i itself if its square is equale to n
 */

int check(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);

	return (check(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find its sqrt
 * Return: the natural square root of n
 * if n does not have a natural sqrt, return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check(n, 1));
}
