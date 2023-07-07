#include <stdio.h>
#include <stdlib.h>

/**
 * main - computes the product of two numbers
 * these numbers are command line arguments
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 when ran successfuly
 */

int main(int argc, char const *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
