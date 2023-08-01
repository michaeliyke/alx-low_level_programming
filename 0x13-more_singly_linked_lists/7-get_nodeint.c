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
	listint_t *cur = head;
	unsigned int i; /* counter variable */

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && cur != NULL; i++)
	{
		cur = cur->next;
	}
	if (i == index && cur != NULL)
		return (cur);
	return (NULL);
}
