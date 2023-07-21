#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string that printed between strings
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);

		if (s != NULL)
			printf("%s", va_arg(ap, char *));
		else
			printf("(nil)");
	}
	printf("\n");

	va_end(ap);
}
