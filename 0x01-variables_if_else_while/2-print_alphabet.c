#include <stdio.h>

/**
 * main - prints the alphabet in lowercase using putchar
 * Return: 0 when ran properly
 */
int main(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return (0);
}
