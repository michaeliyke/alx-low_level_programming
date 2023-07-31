#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list
 * @head: pointer to the pointer to the head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr2;

	ptr2 = *head;
	while (ptr2->next != NULL)
	{
		ptr = ptr2->next;
		free(ptr2);
		ptr2 = ptr;
	}
	free(ptr2);
	*head = NULL;
}
