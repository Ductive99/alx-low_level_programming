#include <stdio.h>

/**
 * main - prints the alphabet in lowercase using putchar in reverse order
 * Return: 0 when ran properly
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
