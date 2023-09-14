#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given position
 * @head: pointer to pointer to head of the list
 * @index: index to delete node from
 *
 * Return: 1 if succeeded,
 * ------ -1 if failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;
	unsigned int i = 0;

	for (; i < index; i++)
	{
		if (!p)
			return (-1);
		p = p->next;
	}

	if (!p)
		return (-1);

	if (index == 0)
	{
		if (p->next)
		{
			*head = p->next;
			p->next->prev = NULL;
		}
		else
			*head = NULL;
		free(p);
		return (1);
	}
	p->prev->next = p->next;
	if (p->next)
		p->next->prev = p->prev;
	else
		(*head)->prev = p->prev;
	free(p);
	return (1);
}
