#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * - c: char
 * - i: integer
 * - f: float
 * - s: char *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *d = "";

	va_list ap;

	va_start(ap, format);

	if (format == NULL)
		return;

	while (format[i] && format)
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", d, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", d, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", d, va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", d, s);
				break;
			default:
				i++;
				continue;
		}
		i++;
		d = ", ";
	}

	printf("\n");
	va_end(ap);
}
