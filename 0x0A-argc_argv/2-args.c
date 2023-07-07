#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: the arguments as strings
 * Return: 0 when ran successfully
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
