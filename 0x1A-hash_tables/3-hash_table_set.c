#include "hash_tables.h"

/**
 * hash_table_set - adds an elememnt to the hash table
 * @table: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 if it succeeded, 0 otherwise
 * For collisions, adds the new node at the beginning of the overflow list
 */
int hash_table_set(hash_table_t *table, const char *key, const char *value)
{
	hash_node_t *node, *coll_item;
	unsigned long index;

	node = create_node(strdup(key), strdup(value));
	index = key_index((unsigned char *)key, table->size);
	coll_item = table->array[index]; /* collision item if any */

	if (coll_item == NULL) /* the slot is free */
	{
		table->array[index] = node; /* Direct insert */
	}
	else
	{
		/* Scenario 1: Update the value if th keys are same */
		if (strcmp(coll_item->key, key) == 0)
		{
			free(table->array[index]->value);
			table->array[index]->value = malloc(strlen(value) + 1);
			strcpy(table->array[index]->value, value);
		}
		else
			/* scenario 2: keys are different, handle collision */
			handle_collision(table, index, node);
		return (1);
	}
	return (1);
}

/**
 * create_node - returns a pointer to a new hashItem
 * @key: the seed key
 * @value: the value
 *
 * Return: pointer to a new hashItem object
 */
hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	node->key = malloc(sizeof(char) * (strlen(key) + 1));
	node->value = malloc(sizeof(char) * (strlen(value) + 1));
	strcpy(node->value, value);
	strcpy(node->key, key);

	node->next = NULL;
	free(key);
	free(value);
	return (node);
}

/**
 * handle_collision - a strategu for handling collision
 * @table: pointer to the hash table
 * @node: pointer to the item needed to be inserted
 * @index: the index to insert node
 *
 * Return: void
 */
void handle_collision(hash_table_t *table,
		      unsigned long index, hash_node_t *node)
{
	hash_node_t *head;

	head = table->array[index];
	node->next = head;
	table->array[index] = node; /* node is the new head */
}
