#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a dlistint
 * @head: pointer to pointer to head of the list
 * @n: value to fill the new node with
 *
 * Return: the address of the new element,
 * or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->next = NULL;
	new->n = n;

	if (*head)
	{
		while (end->next)
			end = end->next;

		end->next = new;
		new->prev = end;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
