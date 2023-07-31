#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: The sum of all data
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (0);
	while (ptr != NULL)
	{
		total += ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
