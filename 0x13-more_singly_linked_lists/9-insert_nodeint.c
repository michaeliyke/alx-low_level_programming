#include "lists.h"

/**
 * insert_nodeint_at_index - add node at the end of list
 * @head: pointer to the pointer to the head of list
 * @idx: index of new element on the list
 * @n: n property for the new node
 *
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_t = malloc(sizeof(*new_t));
	listint_t *ptr;
	unsigned int i = 0; /* counter */

	if (new_t == NULL)
		return (NULL);
	new_t->n = n;
	new_t->next = NULL;
	if (*head == NULL)
	{
		*head = new_t;
		return (new_t);
	}
	ptr = *head;
	while (1)
	{
		if (i == idx - 1 && ptr->next != NULL)
			break;
		ptr = ptr->next;
		i++;
	}
	/* insert it here */
	new_t->next = ptr->next;
	ptr->next = new_t;
	return (new_t);
}
