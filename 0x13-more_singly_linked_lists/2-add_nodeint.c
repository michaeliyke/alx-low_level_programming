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

	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
