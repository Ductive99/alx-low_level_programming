#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at any specific position
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 *
 * Return: the node at index {index},
 * or NULL if node doesn't exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
		if (!ptr)
			return (NULL);
	}
	return (ptr);
}
