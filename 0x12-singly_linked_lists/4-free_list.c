#include "lists.h"

/**
 * free_list -  frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 *
 * Loop through the elements of the list and free each
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
