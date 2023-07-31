0x13. C - More singly linked lists


Write a function that adds a new node at the end of a listint_t list.

listint_t *add_nodeint_end(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed
----------------------------------------

declare *new_t and set new_t to malloc(sizeof(*new_t));
declare a listint_t *ptr;

if new_t is NULL return (NULL);
set new_t->n to  n
set new_t->next to NULL
if(head is NULL)
  set head to new_t;
  return new_t;

set ptr to *head
while (ptr->next != NULL):
  ptr = ptr->next
set ptr->next to new_t
return new_t

bet lists.h *.c
cls && compile *.c && ./a.out