#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number to computes irs factorial
 * Return: n!
 * n < 0 => return (-1) indicating an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
