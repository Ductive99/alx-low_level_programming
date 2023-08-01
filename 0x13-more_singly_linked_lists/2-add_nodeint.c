#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a list
 * @head: address of the first node of the list
 * @n: the value (data) for the new node
 *
 * Return: address of the new element,
 * or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
