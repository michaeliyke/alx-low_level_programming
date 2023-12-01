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
		if (table->count == table->size) /* Table is full */
		{
			dprintf(2, "Insert Error: Hash table is full\n");
			free_hash_node(node);
			return (0);
		}
		table->array[index] = node; /* Direct insert */
	}
	else
	{
		/* Scenario 1: Update the value if th keys are same */
		if (strcmp(coll_item->key, key) == 0)
			strcpy(table->array[index]->value, value);
		else
			/* scenario 2: keys are different, handle collision */
			handle_collision(table, index, node);
		return (1);
	}
	return (1);
}

/***
 * create_item - returns a pointer to a new hashItem
 * @key: the seed key
 * @value: the value
 *
 * Return: pointer to a new hashItem object
 */
hash_node_t *create_node(char *key, char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = malloc(sizeof(char) * strlen(key));
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = malloc(sizeof(char) * strlen(value));
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	strcpy(node->key, key);
	strcpy(node->value, value);

	return (node);
}

/**
 * handle_collision - a strategu for handling collision
 * @table: pointer to the hash table
 * @item: pointer to the item needed to be inserted
 *
 * Return: void
 */
void handle_collision(hash_table_t *table,
		      unsigned long index, hash_node_t *node)
{
	Overflow *head;

	head = table->overflow_buckets[index];
	if (head == NULL) /* This is the first collision for this node */
	{
		head = alloc_list();
		head->node = node;
		table->overflow_buckets[index] = head;
		return;
	}
	else /* a subsequent overflow */
	{
		table->overflow_buckets[index] = insert_overflow(head, node);
		return;
	}
}

/**
 * alloc_list - creates a new overflow list for collision handling
 *
 * Return: pointer to the new overflow list
 */
Overflow *alloc_list()
{
	Overflow *list;

	list = malloc(sizeof(Overflow));
	if (list == NULL)
		return (NULL);
	return (list);
}

/**
 * insert_overflow - inserts into the overflow list
 * @list: pointer to the overflow list
 * @item: pointer to the item to be inserted
 *
 * Return: pointer to the head of the list
 */
Overflow *insert_overflow(Overflow *list, hash_node_t *node)
{
	Overflow *item;

	item = alloc_list();
	if (item == NULL)
		return (NULL);
	item->node = node;
	item->next = NULL;
	if (!list)
		return (item);
	item->next = list; /* node is the new head */
	return (item);
}
