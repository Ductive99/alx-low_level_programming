#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: address of the first node of the list
 *
 * Return: new head node's data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;

	free(*head);

	*head = temp;
	
	return (data);
}
