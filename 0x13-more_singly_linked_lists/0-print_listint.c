#include "lists.h"

/**
 * print_listint - prints all elemts of a list
 * @h: a listint list (singly-linked list)
 *
 * Return: number of nodes;
 */

size_t print_listint(const listint_t *h);
{
	size_t count = 0;
	
	while (!h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	
	return (count);
}
