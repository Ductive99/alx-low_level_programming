#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index
 * @head: address of the list
 * @index: index of the node that should be deleted'
 * Return: 1 in success
 * -----> -1 in failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp2;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (i = 0; temp && i < index - 1; i++)
			temp = temp->next;

	if (!temp || !temp->next)
		return (-1);

	temp2 = temp->next;
	temp->next = temp2->next;
	free(temp2);

	return (1);
}
