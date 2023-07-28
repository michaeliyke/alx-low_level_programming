#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: the head of a linked list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);
	for (n = 0; h != NULL; n++)
	{
		h = h->next;
	}
	return (n);
}
