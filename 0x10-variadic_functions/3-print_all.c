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

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					break;
				case 'i':
					printf("%d", va_arg(ap, int));
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char *);
					if (!s)
						s = "(nil)";
					printf("%s", s);
					break;
				default:
					i++;
					continue;
			}
			i++;
			if (format[i])
				printf(", ");
		}
	}
	printf("\n");
	va_end(ap);


}
