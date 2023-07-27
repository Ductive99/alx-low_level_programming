#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a ode at the end of a list_t list
 *
 * @head: pointer to the beginning of the list
 * @str: string data
 *
 * Return: address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *h = *head;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (h->next)
		h = h->next;

	h->next = new;



	return (new);
}
