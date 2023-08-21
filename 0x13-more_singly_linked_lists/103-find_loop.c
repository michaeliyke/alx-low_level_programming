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
