#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: pointer to the beginnning of the list
 * @index: the position of the node to return
 *
 * Return: pointer to the node of index @index
 * if the node doesn't exit, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; head && i < index; i++)
		head = head->next;

	if (i !=  index)
		return (NULL);

	return (head);
}
