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
	dlistint_t *tmp, *node, *prv;
	size_t i;

	node = malloc(sizeof(dlistint_t));
	if (h == NULL || node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	/* pos 0 insert - no elements prior */
	if (*h == NULL)
	{
		if (index != 0)
			return (NULL);
		*h = node;
		return (node);
	}

	/* Below: *h is not NULL and index != 0 */
	for (tmp = prv = *h, i = 0; tmp; prv = tmp, tmp = tmp->next, i++)
		if (i == index)
		{
			node->next = tmp;
			node->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = node;
			else
				*h = node;
			tmp->prev = node;
			return (node);
		}
	if (prv->next == NULL && i == index) /* insert at the end */
	{
		prv->next = node;
		node->prev = prv;
		return (node);
	}
	return (NULL);
}
