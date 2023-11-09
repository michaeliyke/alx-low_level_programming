#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the pointer to head
 * @n: int data
 *
 * Return: the newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = (int)n;
	node->next = NULL;
	node->prev = NULL;
	for (tmp = *head; tmp && tmp->next; tmp = tmp->next)
		;
	if (!tmp)
		*head = node;
	else
	{
		tmp->next = node;
		node->prev = tmp;
	}
	return (node);
}
