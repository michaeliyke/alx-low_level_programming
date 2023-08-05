#include "main.h"

/**
 * list_bity - function to list all the indexes of a bity list
 * @h: the head of the list
 *
 * Return: void
 */
void list_bity(bity_t *h)
{
	bity_t *b = h;

	if (h == NULL)
		return;

	while (b != NULL)
	{
		printf("%d\n", b->index);
		b = b->next;
	}
}
