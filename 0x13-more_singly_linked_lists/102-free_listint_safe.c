#include "lists.h"

/**
 * print_listint_safe - safely prints items of list
 * @head: pointer to hed
 *
 * Return: number of nodes in the list
 * On failure, program exits with code 98
 */
size_t free_listint_safe(listint_t **head)
{
	listint_t *prev, *joint,
	    *ptr = *head, *end = end_of_list(*head, &joint);
	size_t i;

	(void)joint;
	if (head == NULL || end == NULL)
		return (0);
	for (i = 0; ptr != NULL; i++)
	{
		prev = ptr;
		if (ptr == end)
		{
			free(ptr);
			break;
		}
		ptr = ptr->next;
		free(prev);
	}
	return (i);
}
