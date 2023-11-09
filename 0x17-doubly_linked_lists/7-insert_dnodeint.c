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

	if (h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	if (*h == NULL && index == 0)
	{
		*h = node;
		return (node);
	}

	for (i = 0, tmp = *h; tmp && tmp->next; tmp = tmp->next, i++)
		if (index == i)
			break;

	if (i == index) /* insert here */
	{
		node->next = tmp;
		node->prev = tmp->prev;
		tmp->prev->next = node;
		tmp->prev = node;
		return (node);
	}
	if (i + 1 == index && tmp->next == NULL)
	{
		tmp->next = node;
		node->prev = tmp;
		return (node);
	}
	return (NULL);
}
