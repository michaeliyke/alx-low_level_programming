#include "lists.h"

/**
 * listint_len - Calculates the length of a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements on the list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr;
	size_t counter = 0;

	if (h == NULL)
		return (0);
	ptr = h;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		counter++;
	}
	return (counter);
}
