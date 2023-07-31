0x13. C - More singly linked lists

Write a function that returns the nth node of a listint_t linked list.
where index is the index of the node, starting at 0
if the node does not exist, return NULL
----------------------------------------


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
if(head == NULL)
  return (NULL)
declare pointer to listint_t node *node and set to NULL
declare an unsingned int i for counter;

set node to pointer to head
while (1)
  {if(i == index || node == NULL)break;
  node = node->next;
  i++;}
return (node);



bet lists.h *.c
cls && compile *.c && ./a.out
