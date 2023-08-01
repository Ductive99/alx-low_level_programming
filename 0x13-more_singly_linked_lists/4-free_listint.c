#include "lists.h"

/**
 * free_listint - frees a singly linked list
 * @head: pointer to the head of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head->next;

	while (head)
	{
		free(head);
		head = temp;
		temp = head->next;
	}
}
