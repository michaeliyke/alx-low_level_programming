#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @head: head of the skip list to search in
 * @value:  the value to search for
 *
 * Return: first node where value is located
 * Search the express lane first like: t = t.express instead of t = t.next
 * When the next t.express is >= value then value is between t and t.expess
 * Using a smaller list with t.next steps, search linearly till value
 * is found or found missing
 */
skiplist_t *linear_skip(skiplist_t *head, int value)
{
	skiplist_t *t, *tmp2;
	char check[] = "Value checked at index";
	char found[] = "Value found between indexes";

	if (head == NULL)
		return (NULL);

	for (t = head; t; t = t->express)
	{
		if (t->express)
			printf("%s [%ld] = [%d]\n", check,
			       t->express->index, t->express->n);
		if (!t->express || value <= t->express->n)
			break;
	}
	tmp2 = t->express;
	if (!tmp2)
		for (tmp2 = t; tmp2->next; tmp2 = tmp2->next)
			;
	printf("%s [%ld] and [%ld]\n", found, t->index, tmp2->index);
	for (; t; t = t->next)
	{
		printf("%s [%ld] = [%d]\n", check, t->index, t->n);
		if (t->n == value)
			return (t);
	}

	return (NULL);
}
