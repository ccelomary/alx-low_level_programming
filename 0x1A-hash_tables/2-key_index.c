#include "hash_tables.h"

/**
 * key_index - function that returns index of the given
 * key
 *
 * @key: key to be hashed and find it's corresponding
 * index
 * @size: to limit hash the number returned by hash
 * function and put within size of the hash table
 * Return: index of the corresponding key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
