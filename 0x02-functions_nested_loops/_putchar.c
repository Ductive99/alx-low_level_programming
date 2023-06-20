#include <unistd.h>

/**
 * _putchar - prints the single character c
 * Return: 1 when ran properly
 * and -1 if not
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
