#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to get in the hash table
 * @size: size of the array of the hash table
 *
 * Return: the index at which the key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	index = hash_djb2((unsigned char *)key);

	return (index % size);
}
