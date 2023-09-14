#include "lists.h"

/**
 * sum_dlistint - computes the sum of a dlistint
 * @head: pointer to the head of the list
 *
 * Return: sum of the list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	for (; ptr;)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
