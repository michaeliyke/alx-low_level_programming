#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *prv;

	while (head->next)
	{
		prv = head;
		head = head->next;
		free(prv);
	}
	if (head)
		free(head);
}
