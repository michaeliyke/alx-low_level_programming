#include "hash_tables.h"

/**
 * hash_table_create - creates the hash table
 * @size: size of the table
 *
 * Return: pointer to a new hash table
 */
hash_table_t *hash_table_create(unsigned long size)
{
	hash_table_t *table;
	unsigned long i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return NULL;
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	return (table);
}
