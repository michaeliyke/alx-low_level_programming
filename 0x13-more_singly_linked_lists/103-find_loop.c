#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list
 * @head: pointer of head
 *
 * Return: address of the statrt of the loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *joint, *end = end_of_list(head, &joint);

	(void)end;

	return (joint);
}

/**
 * end_of_list - safely detects the end of a linked list
 * @head: the head of the list
 * @joint: the very point of intersection between end and loop
 *
 * Return: Returns pointer to the end of the list
 */
listint_t *end_of_list(listint_t *head, listint_t **joint)
{
	listint_t *fast = head, *slow = head;

	*joint = NULL;
	if (head == NULL)
		return (NULL);
	while (1)
	{
		if (fast->next == NULL || fast->next->next == NULL)
			return (fast->next == NULL ? fast : fast->next);
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) /* we have a loop */
			break;
	}
	fast = head; /* reset the value of fast for end of list tracing */
	if (head->next == head)
	{ /* list of one node */
		*joint = head;
		return (head->next);
	}
	if (head->next->next == head)
	{ /* list of two nodes */
		*joint = head;
		return (head->next); /* end */
	}
	while (fast->next != slow->next)
	{			   /* when the loop terminates: */
		fast = fast->next; /* slow.nxt and fast.nxt equal the cross */
		slow = slow->next;
		*joint = slow->next; /* slow however equals the last element */
	}
	return (slow);
}
