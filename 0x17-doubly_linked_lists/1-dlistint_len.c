#include "lists.h"

/**
 * dlistint_len - computes the length of a dlistint
 * @h: pointer to the head of the list
 *
 * Return: length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	for (; h; len++)
		h = h->next;

	return (len);
}
