#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value given a key
 * @ht: the hash table to look into
 * @key: the key to find
 *
 * Return: tha value associated with the key
 * or NULL if the key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
