#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of nth node
 *
 * Return:  the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	size_t i;

	if (!head)
		return (NULL);
	for (i = 0, tmp = head; tmp && tmp->next; tmp = tmp->next, i++)
		if (index == i)
			return (tmp);
	return (NULL);
}
