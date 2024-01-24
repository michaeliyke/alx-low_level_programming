#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @table: hash table to be deleted
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *table)
{
	unsigned long i;
	hash_node_t *head, *temp;

	for (i = 0; i < table->size; i++)
	{
		head = table->array[i];
		while (head != NULL) /* if head isn't NULL */
		{
			/* save its next and free it, then on to the next */
			temp = head->next;

			if (head->next)
				free_chain(head);
			else
			{
				free(head->key);
				free(head->value);
				free(head);
			}

			head = temp;
		}
	}
	free(table->array);
	free(table);
}

void free_chain(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}
