#ifndef HASH_TABLES
#define HASH_TABLES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the hash_table_t
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our hash_table_t to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long size);
unsigned long hash_djb2(const unsigned char *str);
unsigned long key_index(const unsigned char *key, unsigned long size);

hash_node_t **create_overflow_buckets(hash_table_t *table);
void free_overflow_buckets(hash_table_t *table);
void delete_table_item(hash_table_t *table, char *key);
hash_node_t *insert_overflow(hash_node_t *list, hash_node_t *node);
hash_node_t *remove_overflow(hash_node_t *list);
void free_overflow(hash_node_t *list);
void handle_collision(hash_table_t *table,
		      unsigned long index, hash_node_t *node);
hash_node_t *alloc_list();
hash_node_t *create_node(char *key, char *value);
void free_hash_node(hash_node_t *node);
void free_table(hash_table_t *table);
void insert_hash_item(hash_table_t *table, char *key, char *value);
int hash_table_set(hash_table_t *table, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void print_chain(hash_node_t *head);

#endif
