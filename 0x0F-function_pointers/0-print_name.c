#include "function_pointers.h"

/**
 * print_name - prints a given name
 *
 * @name: the name to print
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
