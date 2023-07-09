#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	hash_node_t *node;
	unsigned long int iter;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "new");
	hash_table_set(ht, "mentioner", "link");
	hash_table_set(ht, "betty", "View");
	iter = 0;
	while (iter < ht->size)
	{
		node = ht->array[iter];
		while (node)
		{
			printf("[key:%s], [value:%s]\n",
				   node->key,
				   node->value);
			node = node->next;
		}
		iter++;
	}
	return (EXIT_SUCCESS);
}
