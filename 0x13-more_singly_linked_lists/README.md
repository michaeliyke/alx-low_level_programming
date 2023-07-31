0x13. C - More singly linked lists


Write a function that frees a listint_t list.

void free_listint(listint_t *head);
----------------------------------------
Prototype: void free_listint(listint_t *head);
declare a listint_t *ptr;


while (head->next != NULL):
  ptr = head->next
  free(head)
  head = ptr;
free(head);

bet lists.h *.c
cls && compile *.c && ./a.out