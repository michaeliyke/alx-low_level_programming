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
	table->count = 0;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table);
		return NULL;
	}

	for (i = 0; i < table->size; i++)
		table->array[i] = NULL;
	table->overflow_buckets = create_overflow_buckets(table);
	return (table);
}

/**
 * create_overflow_buckets - creates an overflow bucket
 * @table: the hash table
 *
 * Return: double pointer to an overflow list
 */
Overflow **create_overflow_buckets(hash_table_t *table)
{
	Overflow **buckets;
	unsigned long int i;

	buckets = calloc(table->size, sizeof(Overflow *));
	for (i = 0; i < table->size; i++)
		buckets[i] = NULL;
	return (buckets);
}
