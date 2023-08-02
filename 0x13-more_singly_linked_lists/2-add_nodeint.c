#include "lists.h"

/**
 * add_nodeint - add node at the begining of list
 * @head: pointer to the pointer to the head of list
 * @n: n property for the new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(*ptr));

	if (ptr == NULL || head == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}

/**
 * has_loop - checks if a linked list has loop
 * @head: the head of list
 *
 * Return: 1 if true and 0 if false
 */
int has_loop(listint_t *head)
{
	listint_t *fast = head, *slow = head;

	if (head == NULL)
		return (0);

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
			return (1);
	}
	return (0);
}
