#include "lists.h"

/**
 * insert_nodeint_at_index - add node at the end of list
 * @head: pointer to the pointer to the head of list
 * @index: index of new element on the list
 * @n: n property for the new node
 *
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *cur, *prev = NULL, *new_t = malloc(sizeof(*new_t));
	unsigned int i = 0;

	if (new_t == NULL || head == NULL)
		return (NULL);
	new_t->n = n;
	new_t->next = NULL;

	cur = *head;
	for (i = 0; i < index && cur != NULL; i++)
	{
		prev = cur;
		cur = cur->next;
	}

	if (i == index && prev == NULL)
	{
		new_t->next = *head;
		*head = new_t;
		return (new_t);
	}
	else if (i == index && prev != NULL)
	{
		new_t->next = cur;
		prev->next = new_t;
		return (new_t);
	}

	return (NULL);
}
