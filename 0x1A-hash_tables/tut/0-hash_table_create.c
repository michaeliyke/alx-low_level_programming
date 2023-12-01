#include "hash_tables.h"

/***
 * hash - for hashing the elements of the hash table
 * @str: the key to hash
 *
 * Return: long integer
 */
unsigned long
hash(char *str)
{
	int j;
	unsigned long i;

	i = 0;
	for (j = 0; str[j]; j++)
		i += str[j];
	return (i % CAPACIT);
}

/***
 * create_item - returns a pointer to a new hashItem
 * @key: the seed key
 * @value: the value
 *
 * Return: pointer to a new hashItem object
 */
HashItem *create_item(char *key, char *value)
{
	HashItem *item;

	item = malloc(sizeof(HashItem));
	item->key = malloc(sizeof(char) * strlen(key));
	item->value = malloc(sizeof(char) * strlen(value));

	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}

/**
 * create_table - creates the hash table
 * @size: size of the table
 *
 * Return: pointer to a new hash table
 */
HashTable *create_table(int size)
{
	HashTable *table;
	int i;

	table = malloc(sizeof(HashTable));
	table->size = size;
	table->count = 0;
	table->items = calloc(table->size, sizeof(HashItem *));

	for (i = 0; i < table->size; i++)
		table->items[i] = NULL;
	table->overflow_buckets = create_overflow_buckets(table);
	return (table);
}

/**
 * free_hashItem - freeing of a free_hashItem object
 * @item: pointer to a hashItem object
 *
 * Return: void
 */
void free_hashItem(HashItem *item)
{
	free(item->key);
	free(item->value);
	free(item);
}

/**
 * free_table - free a hashtable object
 * @table: pointer to a hash table
 *
 * Return: void
 */
void free_table(HashTable *table)
{
	int i;

	for (i = 0; i < table->size && table->items[i]; i++)
		free_hashItem(table->items[i]);
	free_overflow_buckets(table);
	free(table->items);
	free(table);
}

/**
 * print_table - prints a hash table
 * @table: pointer to the table to be printed
 *
 * Return: void
 */
void print_table(HashTable *table)
{
	int i;

	printf("\nHash Table\n-------------------\n");
	for (i = 0; i < table->size; i++)
	{
		if (table->items[i])
			printf("Index:%d, Key:%s, Value:%s\n",
			       i, table->items[i]->key, table->items[i]->value);
	}
	printf("------------------------------------\n\n");
}

/**
 * insertHashItem - inserts an item into the hash table
 * @table: pointer to a hash table
 * @key: the key seed
 * @value: the associated value
 *
 * Return: void
 * create the item based on {key: value}
 * compute the index based on the hash function
 * check if the index i already occupied or not
 *+-- if not occupied, you cn directly insert it into index
 *+-- Otherwise, it is a collision to be handled
 */
void insert_hash_item(HashTable *table, char *key, char *value)
{
	HashItem *item, *collItem;
	unsigned long index;

	item = create_item(key, value);
	index = hash(key);
	collItem = table->items[index];

	if (collItem == NULL) /* the slot is free */
	{
		if (table->count == table->size) /* Table is full */
		{
			printf("Insert Error: Hash table is full\n");
			free_hashItem(item);
		}
		/* Direct insert */
		table->items[index] = item;
		table->count++;
	}
	else
	{
		/* Scenario 1: Update the value */
		if (strcmp(collItem->key, key) == 0)
			strcpy(table->items[index]->value, value);
		else
			/* scenario 2: handle the collision */
			handle_collision(table, index, item);
		return;
	}
}

/**
 * handle_collision - a strategu for handling collision
 * @table: pointer to the hash table
 * @item: pointer to the item needed to be inserted
 *
 * Return: void
 */
void handle_collision(HashTable *table, unsigned long index, HashItem *item)
{
	Overflow *h;

	h = table->overflow_buckets[index];
	if (h == NULL)
	{
		h = alloc_list();
		h->item = item;
		table->overflow_buckets[index] = h;
		return;
	}
	else
	{
		table->overflow_buckets[index] = insert_overflow(h, item);
		return;
	}
}

/**
 * search - for finding an item from the hsh table
 * @table: pointer to the hash table
 * @key: the key being searched for
 *
 * Return: associated value value
 */
char *search_hash_table(HashTable *table, char *key)
{
	unsigned long index;
	HashItem *item;
	Overflow *head;

	index = hash(key);
	head = table->overflow_buckets[index];
	item = table->items[index];
	if (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return item->value;
		if (head == NULL)
			return (NULL);
		item = head->item;
		head = head->next;
	}
	return (NULL);
}

/**
 * print_search - display the item that matches the key
 * @table: the hash table
 * @key: the seed key
 *
 * Return: void
 */
void print_search(HashTable *table, char *key)
{
	char *value;

	if ((value = search_hash_table(table, key)) == NULL)
		printf("Key:%s does not exits\n", key);
	else
		printf("Key:%s, Value:%s\n", key, value);
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
	return (list);
}

/**
 * insert_overflow - inserts into the overflow list
 * @list: pointer to the overflow list
 * @item: pointer to the item to be inserted
 *
 * Return: pointer to the head of the list
 */
Overflow *insert_overflow(Overflow *list, HashItem *item)
{
	Overflow *head, *node, *temp;

	if (!list)
	{
		head = alloc_list();
		head->item = item;
		head->next = NULL;
		list = head;
		return (list);
	}
	else if (list->next == NULL)
	{
		node = alloc_list();
		node->item = item;
		node->next = NULL;
		list->next = node;
		return (list);
	}

	temp = list;
	while (temp->next->next)
		temp = temp->next;
	node = alloc_list();
	node->item = item;
	node->next = NULL;
	temp->next = node;
	return (list);
}

/**
 * remove_overflow - pops the head of the list
 * and returns the poped item
 * @list: the overflow list
 *
 * Return: pointer the the removed element
 */
Overflow *remove_overflow(Overflow *list)
{
	Overflow *node, *temp, *it;

	if (!list)
		return (NULL);
	if (!list->next)
		return (NULL);
	node = list->next;
	temp = list;
	list = node;
	it = NULL;
	memcpy(temp->item, it, sizeof(HashItem));
	free(temp->item->key);
	free(temp->item->value);
	free(temp->item);
	free(temp);
	return (it);
}

/**
 * free_overflow - free an overflow list
 * @list: an overflow list
 *
 * Return: void
 */
void free_overflow(Overflow *list)
{
	Overflow *temp;

	while (list)
	{
		temp = list;
		list = temp->next;
		free(temp->item->key);
		free(temp->item->value);
		free(temp->item);
		free(temp);
	}
}

/**
 * create_overflow_buckets - creates an overflow bucket
 * @table: the hash table
 *
 * Return: double pointer to an overflow list
 */
Overflow **create_overflow_buckets(HashTable *table)
{
	Overflow **buckets;
	int i;

	buckets = calloc(table->size, sizeof(Overflow *));
	for (i = 0; i < table->size; i++)
		buckets[i] = NULL;
	return (buckets);
}

/***
 * free_overflow_buckets - free the overflow buckets
 * @table: pointer to a hash table
 *
 * Return: void
 */
void free_overflow_buckets(HashTable *table)
{
	Overflow **buckets;
	int i;

	buckets = table->overflow_buckets;
	for (i = 0; i < table->size; i++)
		free_overflow(buckets[i]);
	free(buckets);
}

/**
 * delete_table_item - deletes an item from the table
 * @table: pointer to a hash table
 * @key: an items key
 *
 * Return: void
 */
void delete_table_item(HashTable *table, char *key)
{
	unsigned long index;
	HashItem *item;
	Overflow *head, *node, *curr, *prev;

	index = hash(key);
	item = table->items[index];
	head = table->overflow_buckets[index];

	if (item == NULL)
		return; /* Does not exist */
	else
	{
		if (head == NULL && strcmp(item->key, key) == 0)
		{
			/* collision chain does not exist */
			/* set table index to NULL */
			table->items[index] = NULL;
			free_hashItem(item);
			table->count--;
			return;
		}
		else if (head != NULL)
		{
			/* collsion chain exists */
			if (strcmp(item->key, key) == 0)
			{
				/* remove this item */
				/* set the head of the list as the new item */
				free_hashItem(item);
				node = head;
				head = head->next;
				node->next = NULL;
				table->items[index] = create_item(
				    node->item->key, node->item->value);
				free_overflow(node);
				table->overflow_buckets[index] = head;
				return;
			}
			curr = head;
			prev = NULL;
			while (curr)
			{
				if (strcmp(curr->item->key, key) == 0)
				{
					if (prev == NULL)
					{
						/* first element of the chain*/
						/* remove the chain */
						free_overflow(head);
						table->overflow_buckets[index] = NULL;
						return;
					}
					else
					{
						/* this is somewhere in the chain */
						prev->next = curr->next;
						curr->next = NULL;
						free_overflow(curr);
						table->overflow_buckets[index] = head;
						return;
					}
				}
				curr = curr->next;
				prev = curr;
			}
		}
	}
}
