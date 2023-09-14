#include "lists.h"

/**
 * free_dlistint - frees a dlistint
 * @head: pointer to the head of the list
 *
 * Return: void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (head)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
