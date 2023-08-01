#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *cur, *prev;

	if (head == NULL)
		return;
	while (cur != NULL)
	{
		prev = cur;
		cur = cur->next;
		free(prev);
	}
	free(cur);
	head = NULL;
}
