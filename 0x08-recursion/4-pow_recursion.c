#include "main.h"

/**
 * _pow_recursion - returns x to the power of y
 * @x: the base
 * @y: the power
 * Return: the result of x^y
 * y < 0 => return (-1)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
