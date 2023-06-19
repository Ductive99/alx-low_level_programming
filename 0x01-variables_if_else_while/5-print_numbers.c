#include <stdio.h>

/**
 * main - print all single digit positive integers
 * Return: 0 when ran properly
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
