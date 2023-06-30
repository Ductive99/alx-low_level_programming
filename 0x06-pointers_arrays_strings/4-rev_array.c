#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
	if (n % 2 == 1)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
