#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node,
 * at the beginning of a list_t list
 *
 * @head: pointer to the beginning of the list
 * @str: the data (string) to add in the new node
 *
 * Return: pointer to the newly created node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		exit(EXIT_FAILURE);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
