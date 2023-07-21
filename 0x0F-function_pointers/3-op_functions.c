#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subs an integer from an another
 * @a: 1st integer
 * @b: 2nd integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiplies two integers
 * @a: 1st integer
 * @b: 2nd integer
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divises an int with an another
 * @a: 1st integer
 * @b: 2nd integer
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (a / b);
}

/**
 * op_mod - rest of a / b
 * @a: 1st integer
 * @b: 2nd integer
 * Return: remainder of division of a by b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a % b);
}
