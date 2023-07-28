#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of the linked list
 *
 * Return: the number of elements of the linked list
 */
size_t print_list(const list_t *h)
{
	size_t n;

	if (h == NULL)
		return (0);
	for (n = 0; h != NULL; n++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{

			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (n);
}
