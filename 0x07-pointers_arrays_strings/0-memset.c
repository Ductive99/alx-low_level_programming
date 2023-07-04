#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * it fills the firs n bytes of the memory area pointed to by s
 * with the constant byte b
 * @s: pointer to the first byte of memory to fill
 * @b: the constant filler byte
 * @n: the number of bytes
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
