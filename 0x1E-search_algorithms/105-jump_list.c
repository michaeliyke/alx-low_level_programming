#include "search_algos.h"
#include <math.h>

/**
 * move - move through steps
 * @node: a node
 * @m: the block size
 *
 * Return: void
 * HERE
 * We move both left and right forward by m counts.
 * Of course, left is preceded by right and so that guards it against NULL
 * But right doesn't have this protection.
 * So, should always be checked each time against NULL as a way to determine
 * that it has gone beyond
 */
void move(listint_t **node, size_t m)
{
	if (node == NULL || *node == NULL)
		return;

	while (m-- && (*node)->next)
		*node = (*node)->next;
}

/**
 * jump_list - searches for a value in a sorted head of integers using the
 * Jump search algorithm.
 * @head: head to a lisnked list
 * @size: the size of the list
 * @value: the value to search for
 *
 * Return:  pointer to the first node where value is located
 * HOW
 * block size m is determined
 * left starts from 0 and increments by m
 * right starts from m and incrments by m
 * Before increment, value is checked thus:
 * if value is array[left] return index left
 * if value is <= array[right] OR right >= size:
 * loop from left to right, return the first found
 * OR return (-1)
 * Return (-1) when done and nothing was found
 */
listint_t *jump_list(listint_t *head, size_t size, int value)
{
	listint_t *right, *left;
	/* size_t m = (int)sqrt((double)size), i = 0; */
	size_t m = 4, i = 0;

	if (head == NULL || size == 0)
		return (NULL);

	right = left = head;
	if (left->n == value)
		return (left);

	/* left = left->next; */
	move(&right, m);
	while (left->index < size)
	{

		/* Right value is >= value, right index >= size or !right.nxt*/
		printf("Value checked at index [%ld] = [%d]\n",
		       right->index, right->n);
		if (right->next == NULL || right->n >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       left->index, right->index);
			/* Do linear search from indexes left to left + m */
			i = left->index + m;
			for (; i && left; i--, left = left->next)
			{
				printf("Value checked at index [%ld] = [%d]\n",
				       left->index, left->n);
				if (left->n == value)
					return (left);
			}
			return (NULL); /* At this point, then value missing */
		}

		move(&left, m);
		move(&right, m);
	}
	return (NULL);
}
