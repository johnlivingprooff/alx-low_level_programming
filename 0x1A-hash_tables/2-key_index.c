#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: the key/identifier
 * @size: the size of the hash-table
 * Return: the key's index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t result;

	if (size <= 0)
		return (0);

	result = hash_djb2(key) % size;

	return (result);
}
