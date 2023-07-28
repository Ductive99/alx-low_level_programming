#include "lists.h"

/**
 * free_list - frees a list_t list
 * list_t list is a singly linked list
 *
 * @head: pointer to beginning of the list to free
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
