#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAPACIT 50000 /* size of the Hash table */
unsigned long hash(char *str);
/**
 * struct hashItem - hash item for the hash table
 * @key: the seed key
 * @value: the value of the hash produced
 */
typedef struct HashItem
{
	char *key;
	char *value;
} HashItem;

/**
 * struct overflow - to hold the overflow of hash table index collision
 * @item: pointer to a hash table item
 * @next: pointer to the next object
 */
typedef struct Overflow
{
	HashItem *item;
	struct Overflow *next;
} Overflow;

/**
 * struct HashTable - defines the hash table
 * @items: double pointer to a hashitem object
 * @size: current size
 * @count: element count
 */
typedef struct HashTable
{
	HashItem **items;
	Overflow **overflow_buckets;
	int size;
	int count;
} HashTable;

Overflow **create_overflow_buckets(HashTable *table);
void free_overflow_buckets(HashTable *table);
void delete_table_item(HashTable *table, char *key);
Overflow *insert_overflow(Overflow *list, HashItem *item);
Overflow *remove_overflow(Overflow *list);
void free_overflow(Overflow *list);
void handle_collision(HashTable *table, unsigned long index, HashItem *item);
char *search_hash_table(HashTable *table, char *key);
void print_search(HashTable *table, char *key);
Overflow *alloc_list();
HashItem *create_item(char *key, char *value);
HashTable *create_table(int size);
void free_hashItem(HashItem *item);
void free_table(HashTable *table);
void print_table(HashTable *table);
void insert_hash_item(HashTable *table, char *key, char *value);

#endif
