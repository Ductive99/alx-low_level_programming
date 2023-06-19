#include <stdio.h>

/**
 * main - pritn all possible combs of two digits
 * Return: 0 when ran properly
 */
int main(void)
{
	int n1;
	int n2;	

	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = n1 + 1; n2 < 58; n2++)
		{
			putchar(n1);
			putchar(n2);
			if (n1 != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
