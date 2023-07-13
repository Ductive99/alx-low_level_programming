#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 when ran successfuly
 */

int main(int argc, char *argv[])
{
	unsigned long prod;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	prod = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", prod);

	return (0);
}
