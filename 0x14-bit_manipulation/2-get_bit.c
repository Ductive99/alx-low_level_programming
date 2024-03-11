#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number
 * @index: starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index, -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);

	if (index > 32)
		return (-1);

	return (bit & 1);
}
