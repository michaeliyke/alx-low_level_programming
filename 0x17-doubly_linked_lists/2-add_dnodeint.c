#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the pointer to head node
 * @n: the data of the new now
 *
 * Return: the newly added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node, *tmp;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = (int)n;
	node->next = NULL;
	node->prev = NULL;
	tmp = *head;
	if (!tmp)
		*head = node;
	else
	{
		tmp->prev = node;
		node->next = tmp;
		*head = node;
	}
	return (node);
}
