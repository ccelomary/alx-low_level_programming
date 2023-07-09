#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes
 * and frees the content of the hash table
 * and frees hash table itself
 *
 * @ht: hash table
 * Return: (void)
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int iterator;
	hash_node_t *current, *next;

	iterator = 0;
	while (iterator < ht->size)
	{
		current = ht->array[iterator];
		while (current)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
		iterator++;
	}
	free(ht->array);
	free(ht);
}
