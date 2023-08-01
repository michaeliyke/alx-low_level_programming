0x13. C - More singly linked lists

Write a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head);
----------------------------------------

if curr only
  free curr
  set head NULL;

if prev and cur
set prev next to cur next
free cur
set head to NULL

bet lists.h *.c
cls && compile *.c && ./a.out
