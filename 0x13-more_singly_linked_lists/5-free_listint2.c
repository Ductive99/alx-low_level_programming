#include "lists.h"

/**
 * free_listint2 - frees a singly linked list +
 * sets the 'head' to NULL
 *
 * @head: address of the first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
