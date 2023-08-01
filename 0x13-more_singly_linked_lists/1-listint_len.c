#include "lists.h"

/**
 * listint_len - calculates the length of a list
 * @h: pointer to the head of the list
 *
 * Return: the length of the list
 */

size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h; len++)
	{
		h = h->next;
	}

	return (len);
}
