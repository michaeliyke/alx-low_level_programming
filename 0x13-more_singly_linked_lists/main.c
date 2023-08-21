#include "lists.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *node;
	size_t n;

	head = NULL;
	node = add_nodeint(&head, 9);
	node->next = add_nodeint(&head, 6);
	n = print_listint_safe(head);
	printf("%lu\n", n);
	/* _free_listint_safe(&head); */
	return (0);
}
