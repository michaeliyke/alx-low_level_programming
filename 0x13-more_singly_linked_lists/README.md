0x13. C - More singly linked lists

Write a function that prints a listint_t linked list.

Prototype: size_t print_listint_safe(const listint_t *head);
Returns: the number of nodes in the list
This function can print lists with a loop
You should go through the list only once
If the function fails, exit the program with status 98
Output format: see example
----------------------------------------
size_t print_listint_safe(const listint_t *head){
  declare var ptr to track nodes and set it to head
  declare var i for counter

  if head is null return 0
  for i is 0; ptr not null; i++, ptr = ptr next
    print the ptr n
  return i
}


int end_of_list(h){
  fast, slow = h;
  end;
  while(1)
  {

    if(fast.next == null || fast.next.next == null)
    {
      end = fast.next == null ? fast : fast.next;
      break;
    }
    fast = fast.next.next;
    slow = slow.next

    if(fast == slow)
      break; /* current value of slow needed in the next step */
  }
  fast = h;
  while(fast.next != slow.next)
  {
    fast = fast.next;
    slow = slow.next;
  }
  return (slow);
}



int has_loop(h){
  fast, slow = h;
  while(fast.next.next != null and slow.next != null)
  {
    fast = fast.next.next;
    slow = slow.next
    if(fast == slow)
      return (1);
  }
  return (0);
}

int loop_start(h){
  fast, slow = h;
  while(fast.next.next != null and slow.next != null)
  {
    fast = fast.next.next;
    slow = slow.next
    if(fast == slow)
      point = slow;
      break;
  }
  fast = h;
  while(fast != slow)
  {
    fast = fast.next;
    slow = slow.next;
  }
  return (slow);
}

bet lists.h *.c
cls && compile *.c && ./a.out
