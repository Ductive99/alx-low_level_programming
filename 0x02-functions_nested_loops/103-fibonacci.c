#include <stdio.h>
#include "main.h"

/**
 * main - prints thesum of all even terms of Fibonacci numbers under 4 million
 * Return: 0
 */
int main(void)
{
	long temp;
	long n0 = 1;
	long n1 = 2;
	long sum = 2;

	while (n0 + n1 < 40000000)
	{
		temp = n0 + n1;
		n0 = n1;
		n1 = temp;
		if (n1 % 2 == 0)
			sum += n1;
	}
	printf("%ld\n", sum);
	return (0);
}
