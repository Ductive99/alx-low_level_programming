#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * for x amount
 * Usage: ./change cents
 * cents: the amount of cents you need to give back
 * print "Error" if arguments passed not exactly 1
 * print "0" if number passed is negative
 * @argc: the number of arguments
 * @argv: the arguments
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents;
	int coinCount;

	coinCount = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("0\n");
			return (0);
		}

		while (cents != 0)
		{
			if (cents >= 25)
				cents -= 25;
			else if (cents >= 10)
				cents -= 10;
			else if (cents >= 5)
				cents -= 5;
			else if (cents >= 2)
				cents -= 2;
			else
				cents--;

			coinCount++;
		}

		printf("%d\n", coinCount);
		return (0);
	}

}
