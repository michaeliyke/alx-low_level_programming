#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @table: the hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *table)
{
	unsigned long i;
	hash_node_t *node, *prev;

	if (!table)
		return;
	prev = NULL;
	putchar('{');
	for (i = 0; i < table->size; i++)
	{
		node = table->array[i];
		if (prev && node)
		{
			if (prev->next)
				print_chain(prev);
			else
				printf("'%s': '%s', ", prev->key, prev->value);
		}
		prev = node != NULL ? node : prev;
	}
	if (prev)
	{
		if (prev->next)
			print_chain(prev);
		else
			printf("'%s': '%s'", prev->key, prev->value);
	}
	putchar('}');
	putchar('\n');
}

/**
 * print_chain - print the chain of collisions under an index
 * @head: the head node
 *
 * Return: void
 */
void print_chain(hash_node_t *head)
{
	while (head)
	{
		printf("'%s': '%s', ", head->key, head->value);
		head = head->next;
	}
}
