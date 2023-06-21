#include <stdio.h>
#include "main.h"

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int i;
       	long temp;
	long n0 = 1;
	long n1 = 2;

	printf("%ld, %ld, ", n0, n1);
	for (i = 0; i < 50; i++)
	{
		temp = n0 + n1;
		printf("%ld", temp);
		n0 = n1;
		n1 = temp;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
