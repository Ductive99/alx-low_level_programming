#include <stdio.h>
#include <stdlib.h>

void print_opc(char *s, int n);

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	print_opc((char *)&main, n);

	return (0);
}

/**
 * print_opc - prints opcodes of main
 * @s: address of main
 * @n: number of bytes to print
 *
 * Return: void
 */

void print_opc(char *s, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < n - 1)
			printf(" ");
	}

	printf("\n");
}
