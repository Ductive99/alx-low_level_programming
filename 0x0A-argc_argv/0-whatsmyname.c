#include <stdio.h>

/**
 * main - prints the program's name
 * @argc: argument count
 * @argv: argument vector: array of strings
 * Return: 0 when ran successfuly
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
