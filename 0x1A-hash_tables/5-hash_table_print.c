#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hashtable
*/
void hash_table_print(const hash_table_t *ht)
{
	size_t index, i = 0;
	hash_node_t *node;

	if (ht == NULL)
		printf("{}\n");

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node != NULL)
		{
			if (i > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			i++;
			node = node->next;
		}
	}
	printf("}\n");
}
