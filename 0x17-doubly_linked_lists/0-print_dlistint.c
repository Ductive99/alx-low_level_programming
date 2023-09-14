#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	for (; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
