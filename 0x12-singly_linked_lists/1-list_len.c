#include "lists.h"

/**
 * list_len - counts the number of elements of a list_t list
 * list_t list is a singly linked list
 *
 * @h: pointer to the list
 *
 * Return: the number of elements/nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count;

	for (node_count = 0; h != NULL; node_count++)
		h = h->next;

	return (node_count);
}
