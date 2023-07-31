#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: pointer to the head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head->next != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
	free(head);
}
