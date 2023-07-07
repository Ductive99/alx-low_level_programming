#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * print 0 if no arguments are passed
 * print 'Error' if one of the arguments is not a number
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 when ran successfuly
 */

int main(int argc, char *argv[])
{
	int i;
	long sum;
	char *endptr;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += strtol(argv[i], &endptr, 10);

		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}

	}

	printf("%ld\n", sum);

	return (0);
}
