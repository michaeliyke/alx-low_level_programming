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
