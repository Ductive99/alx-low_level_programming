#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key to add (can't be an empty string)
 * @value: the value associated with the key (can be an empty string)
 *
 * Return: 1 -> in success
 * ------- 0 -> in failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy;
	hash_node_t *new_node;
	unsigned long int index, i;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	copy = strdup(value);
	if (!copy)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = copy;
			return (1);
		}
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(copy);
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
