#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data of a list
 * @head: pointer to the beginning of the list
 *
 * Return: the sum
 * 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
