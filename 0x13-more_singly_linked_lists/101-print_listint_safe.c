#include "lists.h"

/**
 * print_listint_safe - safely prints items of list
 * @head: pointer to hed
 *
 * Return: number of nodes in the list
 * On failure, program exits with code 98
 */
size_t print_listint_safe(listint_t *head)
{
	size_t i;
	listint_t *ptr = head, *joint, *end = end_of_list(head, &joint);

	if (head == NULL || end == NULL)
		return (0);

	for (i = 1; ptr != NULL; i++)
	{ /* cover: end != head and non loop */
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		if (ptr == end)
			break;
		ptr = ptr->next;
	}
	if (joint == NULL) /* return no loop case */
		return (i);

	printf("-> [%p] %d\n", (void *)joint, joint->n);
	return (i);
}
