#include <stdio.h>

/**
 * main - print all possible three-digit combs
 * Return: 0 when ran properly
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	for (n1 = 48; n1 < 58; n1++)
	{
		for (n2 = n1 + 1; n2 < 58; n2++)
		{
			for (n3 = n2 + 1; n3 < 58; n3++)
			{
				putchar(n1);
				putchar(n2);
				putchar(n3);
				if (n1 != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
