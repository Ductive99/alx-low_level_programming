#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: address of the list
 * @idx: the index in which the node will be added
 * @n: data of the new node
 *
 * Return: address of the new node,
 * or NULL if it failed
 * if it is impossible to add the new node at index idx,
 * the node won't be added and NULL will be returned
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx - 1; i++)
		temp = temp->next;

	if (i != idx - 1)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (new);
}
