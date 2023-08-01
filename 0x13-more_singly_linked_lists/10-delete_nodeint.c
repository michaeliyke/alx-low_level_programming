#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the pointer to the head of list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if successful and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *prev;
	unsigned int i; /* counter */

	if (head == NULL || *head == NULL)
		return (-1);
	cur = *head;
	if (index == 0)
	{ /* head goes to head.next or NULL if only one element is in list */
		*head = delete_node(*head);
		return (1);
	}
	for (i = 0; i < index && cur != NULL; i++)
	{
		prev = cur;
		cur = cur->next;
	}

	if (i == index && cur != NULL)
	{ /* next goes to ptr.next or NULL */
		prev->next = delete_node(cur);
		return (1);
	}
	return (-1);
}

/**
 * delete_node - deletes current node and returns thr next
 * @node: node to be deleted
 *
 * Return: the next after current node or NULL
 */
listint_t *delete_node(listint_t *node)
{
	listint_t *next;

	if (node == NULL)
		return (NULL);
	next = node->next;
	free(node);
	return (next);
}
