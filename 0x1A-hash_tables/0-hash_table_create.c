#include "hash_tables.h"

/**
 * hash_table_create - function that initialize new
 * hash_table
 *
 * @size: number of the backets inside of hash_table
 * Return: return initilized hash_table or NULL if
 * it's unable to allocate memory for hash table
 * or it's backet(array)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int iterator;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	iterator = 0;
	while (iterator < size)
	{
		ht->array[iterator] = NULL;
		iterator++;
	}
	return (ht);
}
