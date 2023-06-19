#include <stdio.h>

/**
 * main - prints all base 16 numbers
 * Return: 0 when ran properly
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
		{
			for (n = 'a'; n <= 'f'; n++)
			{
				putchar(n);
				if (n == 'f')
					break;
			}
		}
	}
	putchar('\n');
	return (0);
}
