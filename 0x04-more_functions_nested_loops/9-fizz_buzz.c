#include <stdio.h>
#include "main.h"

/**
 * main - print numbers from 1 to 10
 * Fizz instead of multiples of 3 
 * Buzz instead of multiples of 5
 * FizzBuzz instead of multiples of both 3 & 5
 * Return: 0 when ran succefully
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		else if (i % 3 != 0 && i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
