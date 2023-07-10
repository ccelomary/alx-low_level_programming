#include "hash_tables.h"

/**
 * add_to_begging - function that adds
 * new nodes at the beggining of the linkedlist
 *
 * @backet: linkedlist
 * @key: the backet key used in the hash table
 * @value: the value use in the hash table
 * Return: new created node or NULL in case of error
 */
hash_node_t *add_to_begging(hash_node_t **backet,
							const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	if (value && !node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = *backet;
	*backet = node;
	return (node);
}

/**
 * hash_table_set - set new pair of key value to
 * the hash table or update the value of already
 * existing one
 *
 * @ht: hash table
 * @key: the key to be assigned to the hash table
 * @value: the value that going to be associated to the key
 * Return: 1 means the value added to the hash table
 *		0 means the value didn't get added to the hash table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp;
	char *val;

	if (!key || *key == '\0' || !ht || !value)
		return (0);
	index = key_index((unsigned const char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			val = strdup(value);
			if (!val)
				return (0);
			free(tmp->value);
			tmp->value = val;
			return (1);
		}
		tmp = tmp->next;
	}
	return ((add_to_begging(&ht->array[index], key, value)) ? 1 : 0);
}
