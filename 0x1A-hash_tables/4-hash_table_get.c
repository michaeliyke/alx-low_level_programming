#include "hash_tables.h"

/**
 * hash_table_get - retrieves the value associated with a key
 * @table: hash table
 * @key: the key
 *
 * Return: returns the value associated with a key
 */
char *hash_table_get(const hash_table_t *table, const char *key)
{
	unsigned long index;
	hash_node_t *head;

	index = key_index((unsigned char *)key, table->size);
	head = table->array[index];
	if (head == NULL)
		return (NULL);
	if (strcmp(head->key, key) == 0)
		return (head->value);
	while ((head = head->next))
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
	}
	return (NULL);
}
