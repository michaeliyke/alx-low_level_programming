#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head node
 * @index: the node index to insert new element
 * @n: the node's data
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int index, int n)
{
	dlistint_t *tmp, *node;
	size_t i;

	node = malloc(sizeof(dlistint_t));
	if (h == NULL || node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	/* pos 0 insert - no elements prior */
	if (*h == NULL && index == 0)
	{
		*h = node;
		return (node);
	}
	else if (*h != NULL && index == 0)
	{
		node->next = *h;
		node->prev = (*h)->prev;
		(*h)->prev = node;
		return (node);
	}
	else if (*h == NULL)
		return (NULL);

	/* Below: *h is not NULL and index != 0 */
	for (tmp = *h, i = 0; tmp && tmp->next; tmp = tmp->next, i++)
		if (i == index)
		{
			node->next = tmp;
			node->prev = tmp->prev;
			tmp->prev->next = node;
			tmp->prev = node;
			return (node);
		}
	return (NULL);
}
