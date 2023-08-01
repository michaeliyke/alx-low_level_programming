#include "lists.h"

/**
 * add_nodeint_end - add node at the end of list
 * @head: pointer to the pointer to the head of list
 * @n: n property for the new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_t = malloc(sizeof(*new_t));
	listint_t *ptr;

	if (new_t == NULL || head == NULL)
		return (NULL);
	new_t->n = n;
	new_t->next = NULL;
	if (*head == NULL)
	{
		*head = new_t;
		return (new_t);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new_t;
	return (new_t);
}
