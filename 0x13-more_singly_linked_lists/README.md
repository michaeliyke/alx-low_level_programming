0x13. C - More singly linked lists


Write a function that adds a new node at the beginning of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: the address of the new element, or NULL if it failed

----------------------------------------

declare *ptr and set ptr to malloc(sizeof(*ptr));

if ptr is NULL return (NULL);
set ptr->n to  n
set ptr->next to head
set head to ptr
return ptr

bet lists.h *.c
cls && compile *.c && ./a.out