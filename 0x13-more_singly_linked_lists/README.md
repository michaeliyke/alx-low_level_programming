0x13. C - More singly linked lists

Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

if the linked list is empty return 0
----------------------------------------
int pop_listint(listint_t **head);
if(head == NULL || *head == NULL)
  return (0)
set ptr to *head
set n tp ptr.n
set head to head.next
free ptr
return (n);

bet lists.h *.c
cls && compile *.c && ./a.out
