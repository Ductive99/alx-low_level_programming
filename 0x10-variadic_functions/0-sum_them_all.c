#include "variadic_functions.h"

/**
 * sum_them_all - calculates the sum of all parameters
 * @n: number of parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_start(ap, n);

	sum = 0;

	if (n)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(ap, int);

		va_end(ap);
	}
	return (sum);
}
