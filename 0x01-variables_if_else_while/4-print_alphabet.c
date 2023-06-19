#include <stdio.h>

/**
 * main - print the alphabet except 'q' and 'e'
 * Return: 0 when ran properly
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}
	putchar('\n');
}
