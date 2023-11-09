#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t
 * linked list
 * @index: the index
 * @h: pointer to pointer to head
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *tmp;
	size_t i;

	if (h == NULL || *h == NULL)
		return (-1);

	/* Below: *h is not NULL and index != 0 */
	for (tmp = *h, i = 0; tmp; tmp = tmp->next, i++)
		if (i == index)
		{
			if (tmp->prev)
				tmp->prev->next = tmp->next;
			else
				*h = tmp->next;
			return (1);
		}
	return (-1);
}
