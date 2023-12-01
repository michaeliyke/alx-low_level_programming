#include "hash_tables.h"

/**
 * key_index - computes the index of a key
 * @key: the said key to compute index for
 * @size: size of the table
 *
 * Rteurn: the index of the key
 */
unsigned long key_index(const unsigned char *key, unsigned long size)
{
	unsigned long hash, index;

	hash = hash_djb2(key);

	index = hash % size;

	return (index);
}

/**
 * free_hash_node - freeing of a free_hashItem object
 * @item: pointer to a hashItem object
 *
 * Return: void
 */
void free_hash_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
}
