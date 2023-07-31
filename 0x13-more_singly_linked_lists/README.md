0x13. C - More singly linked lists

Write a function that frees a listint_t list.
void free_listint2(listint_t **head);
The function sets the head to NULL
----------------------------------------
free_listint2 free_listint(listint_t **head);
declare a listint_t *ptr;


while ((*head)->next != NULL):
  ptr = (*head)->next
  free(*head)
  (*head) = ptr;
free(*head);
*head = NULL;

bet lists.h *.c
cls && compile *.c && ./a.out