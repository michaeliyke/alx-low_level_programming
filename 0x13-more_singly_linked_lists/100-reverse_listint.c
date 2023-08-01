#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: double pointer to the head
 *
 * Return: the first element in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = temp;
	}
	if (*head == NULL && temp == NULL)
	{
		*head = prev;
		return (*head);
	}
	return (NULL);
}
