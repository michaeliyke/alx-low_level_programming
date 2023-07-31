#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node to return
 *
 * Return: node whose index matches
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i; /* counter variable */

	if (head == NULL)
		return (NULL);
	while (1)
	{
		if (i == index || node == NULL)
			break;
		node = node->next;
		i++;
	}
	return (node);
}
