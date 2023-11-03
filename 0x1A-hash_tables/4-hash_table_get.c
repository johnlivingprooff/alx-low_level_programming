#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hashtable
 * @key: the key/identifier
 * Return: the value, or NUll
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index;
	hash_node_t *node;

	if (!ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
