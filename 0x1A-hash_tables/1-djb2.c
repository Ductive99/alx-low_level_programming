#include "hash_tables.h"

/**
 * hash_djb2 - hash function using the djb2 algorithm
 * @str: the value to hash
 *
 * Return: the key
 * Source: https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
