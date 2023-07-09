#include "hash_tables.h"

/**
 * _strlen - function that calculates
 * the length of the given str
 *
 * @str: to calculate nex
 * Return: length
 */
unsigned long int _strlen(const char *str)
{
	unsigned long int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

/**
 * _strcpy - function that copies the src
 * into the dest
 *
 * @dest: destination which will recieve the data
 * @src: source of the data
 * Return: dest
 */
char *_strcpy(char *dest, const char *src)
{
	unsigned long int iter;

	iter = 0;
	while (src[iter])
	{
		dest[iter] = src[iter];
		iter++;
	}
	dest[iter] = 0;
	return (dest);
}

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
	node->key = malloc(sizeof(char) * (_strlen(key) + 1));
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = malloc(sizeof(char) * (_strlen(value) + 1));
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	_strcpy(node->key, key);
	_strcpy(node->value, value);
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
	hash_node_t **backet, *tmp;
	char *val;

	index = key_index((unsigned const char *)key, ht->size);
	backet = &ht->array[index];
	tmp = *backet;
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			val = malloc(sizeof(char) * (_strlen(value) + 1));
			if (!val)
				return (0);
			free(tmp->value);
			_strcpy(val, value);
			tmp->value = val;
			return (1);
		}
		tmp = tmp->next;
	}
	return ((add_to_begging(backet, key, value)) ? 1 : 0);
}
