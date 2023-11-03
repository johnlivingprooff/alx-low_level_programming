#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hashtable
*/
void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *current, *node;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			node = current;
			current = current->next;
			free(node->key);
			free(node->value);
			free(node);
		}

	}

	free(ht->array);
	free(ht);
}
