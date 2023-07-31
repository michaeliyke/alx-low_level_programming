0x13. C - More singly linked lists


Write a function that returns the number of elements in a linked listint_t list.

/**
Prototype: size_t listint_len(const listint_t *h);
----------------------------------------

declare constant var listint_t *ptr;
declare size_t counter and set to 0;

if head is null return 0

set ptr to head
while(ptr != null)
  set ptr to ptr->next
  increment countr

return counter

Run bet lists.h *.c
Run cls && compile *.c && ./a.out