#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 *
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *p, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			p = ht->array[i];
			while (p)
			{
				tmp = p->next;
				free(p->key);
				free(p->value);
				free(p);
				p = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
