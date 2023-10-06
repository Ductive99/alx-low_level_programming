#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 *
 * Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	short comma = 0;
	unsigned long int i;

	if (!ht)
		return (NULL);

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (comma == 1)
				print(", ");

			printf("'%s': '%s'", p->key, p->value);

			if (comma == 0)
				comma = 1;

			p = p->next;
		}
	}
	printf("}\n");
}
