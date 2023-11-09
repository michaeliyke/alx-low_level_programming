#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the sum of all the elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0; head && head->next; head = head->next)
		sum += head->n;
	if (head)
		sum += head->n;
	return (sum);
}
