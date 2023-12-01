#include "hash_tables.h"

/**
 * main - entry point
 *
 * Return: always 1
 */
int main(void)
{
	HashTable *ht = create_table(CAPACIT);
	insert_hash_item(ht, (char *)"1", (char *)"First address");
	insert_hash_item(ht, (char *)"2", (char *)"Second address");
	insert_hash_item(ht, (char *)"Hel", (char *)"Third address");
	insert_hash_item(ht, (char *)"Cau", (char *)"Fourth address");
	print_search(ht, (char *)"1");
	print_search(ht, (char *)"2");
	print_search(ht, (char *)"3");
	print_search(ht, (char *)"Hel");
	print_search(ht, (char *)"Cau"); /* Collision! */
	print_table(ht);
	delete_table_item(ht, (char *)"1");
	delete_table_item(ht, (char *)"Cau");
	print_table(ht);
	free_table(ht);
	return (0);
}
