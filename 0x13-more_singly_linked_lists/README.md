0x13. C - More singly linked lists


Write a function that prints all the elements of a listint_t list.
Return: the number of nodes
Format: see example
You are allowed to use printf
----------------------------------------

declare constant var listint_t *ptr;
declare counter and set to 0;

if head is null return 0

set ptr to head
while(ptr != null)
  print ptr->n with printf
  set ptr to ptr->next
  increment countr

return counter

Run bet lists.h *.c
Run cls && compile *.c && ./a.out