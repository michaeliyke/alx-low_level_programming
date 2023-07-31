0x13. C - More singly linked lists

Write a function that returns the sum of all the data (n) of a listint_t linked list.

if the list is empty, return 0
----------------------------------------

/*
sum_listint - sum of all the data (n) of a listint_t linked list
@head: pointer to the head of the list
Return: The sum of all data
*/
int sum_listint(listint_t *head);
declare int total as set to 0;

if(head == NULL)return (0);
while(ptr != NULL)
{
  total += ptr->n;
  ptr = ptr->next;
}
return (total);

bet lists.h *.c
cls && compile *.c && ./a.out
