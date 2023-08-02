#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	listint_t *head2;
	listint_t *node;

	head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);
	head = NULL;
	node = add_nodeint(&head, 0);	     /* set end of the list to node */
	add_nodeint(&head, 1);		     /* latest head is 1 */
	add_nodeint(&head, 2);		     /* latest head is 2 */
	add_nodeint(&head, 3);		     /* latest head is 3 */
	add_nodeint(&head, 4);		     /* latest head is 4 */
	node->next = add_nodeint(&head, 98); /* make tail point to curr head */
	add_nodeint(&head, 402);	     /* latest head is 402 */
	add_nodeint(&head, 1024);	     /* latest head is 1024 */
	/* print_listint_safe(head); */
	return (0);
}
