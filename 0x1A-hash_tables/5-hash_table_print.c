#include "hash_tables.h"

/**
 * hash_table_print - function that prints hash_table
 * content into standard output
 *
 * @ht: hash_table
 * Return: Nothing (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int iterator;
	hash_node_t *node;
	int is_printed;

	iterator = 0;
	is_printed = 0;
	printf("{");
	while (iterator < ht->size)
	{
		node = ht->array[iterator];
		if (node && is_printed && iterator + 1 < ht->size)
			printf(", ");
		while (node)
		{
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			is_printed = 1;
		}
		iterator++;
	}
	printf("}\n");
}
