#include "3-calc.h"

/**
 * main - usage calc function
 *
 * @argc: number of arguments
 * @argv: the arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int (*fn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fn = get_op_func(argv[2]);

	if (!fn)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fn(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
