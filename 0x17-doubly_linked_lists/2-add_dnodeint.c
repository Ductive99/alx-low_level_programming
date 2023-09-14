#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of a dlistint
 * @head: pointer to pointer to head of the list
 * @n: integer to fill the new node with
 *
 * Return: the address of the new element,
 * or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->next = *head;
	new->prev = NULL;
	new->n = n;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (*head);
}
