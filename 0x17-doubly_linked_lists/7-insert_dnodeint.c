#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a node at a given position
 * @h: pointer to pointer to the head of the list
 * @idx: index to add node in
 * @n: data to fill new node with
 *
 * Return: the address of the new node,
 * or NULL if it failed and if it's not possible
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *p = *h;
	unsigned int i = 0;

	for (i = 0; i < idx; i++)
	{
		if (!p)
			return (NULL);
		p = p->next;
	}

	if (idx == 0 || *h == NULL)
	{
		new = add_dnodeint(h, n);
		if (!new)
			return (NULL);
		return (new);
	}
	else if (!p)
	{
		new = add_dnodeint_end(h, n);
		if (!new)
			return (NULL);
		return (new);
	}	

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->next = p;
	new->prev = p->prev;
	new->n = n;
	p->prev->next = new;
	p->prev = new;

	return (new);
}

