#include "lists.h"

/**
 * pop_listint - deletes the head node of the list
 * @head: pointer to the pointer to the head node
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	ptr = *head;
	n = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (n);
}
