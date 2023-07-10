#include "hash_tables.h"

/**
 * hash_table_get - function that retrive value
 * from the given hash table using key
 *
 * @ht: hash_table
 * @key: the key to look up for in hash table
 * Return: correspand value of given key or NULL
 * if key doesn't exist in value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t const *node;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node)
	{
		if (!strcmp(node->key, key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
