#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the # table
 * Return: pointer to the new table, else NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	size_t i;

	if (!table)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array = NULL;

	return (table);
}
