#include <stdio.h>

/**
 * main - print single digit positive numbers using putchar()
 * Reaturn: 0 when ran properly
 */
int main(void)
{
	int n;
	int holder;

	for (n = 0; n < 10; n++)
	{
		holder = '0' + n;
		putchar(holder);
	}
	putchar('\n');
	return (0);
}
