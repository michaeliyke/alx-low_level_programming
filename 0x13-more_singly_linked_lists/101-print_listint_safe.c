#include "lists.h"

/**
 * print_listint_safe - safely prints items of list
 * @head: pointer to hed
 *
 * Return: number of nodes in the list
 * On failure, program exits with code 98
 */
size_t print_listint_safe(listint_t *head)
{
	listint_t *ptr = head, *joint, *end = end_of_list(head, &joint);
	size_t i;

	if (head == NULL || end == NULL)
		return (0);
	for (i = 1; ptr != NULL; i++)
	{
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		if (ptr == end)
			break;
		ptr = ptr->next;
	}
	(void)ptr;
	(void)end;
	(void)joint;
	/* 0,1,2,3,4,98, 402, 1024		: 0, 1024 */
	/* 0,1,2,3,4,     , 402, 1024		: 0, 1024 */
	/* printf("\nEND: [%p] %d\n", (void *)end, end->n); */
	if (joint)
		printf("-> [%p] %d\n", (void *)joint, joint->n);
	return (i);
}

/**
 * end_of_list - safely detects the end of a linked list
 * @head: the head of the list
 * @joint: the very point of intersection between end and loop
 *
 * Return: Returns pointer to the end of the list
 */
listint_t *end_of_list(listint_t *head, listint_t **joint)
{
	listint_t *fast = head, *slow = head, *prev_slow, *end;

	*joint = NULL;
	(void)prev_slow;
	(void)end;

	if (head == NULL)
		return (NULL);
	while (1)
	{
		if (fast->next == NULL || fast->next->next == NULL)
			return (fast->next == NULL ? fast : fast->next);
		prev_slow = slow;
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
			/* we have a loop */
			break;
	}
	fast = head; /* reset the value of fast for end of list tracing */
	while (fast->next != slow->next)
	{
		/**
		 * when the loop terminates:
		 * slow.next and fast.next equal the intersection
		 * slow however equals the last element
		 */
		fast = fast->next;
		slow = slow->next;
		*joint = slow->next;
	}

	return (slow);
}

/**
 * print_int - Print an integer to the std output
 * @n: interger to print
 *
 * Return: void
 */
int print_int(long int n)
{
	char buff[10], temp;
	int i = 0, sign = 1, j;

	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	do
	{
		buff[i++] = '0' + n % 10;
		n /= 10;
	} while (n > 0);
	if (sign < 0)
		buff[i++] = '-';
	buff[i] = '\0';
	j = 0;
	i--;
	while (i > j)
	{
		temp = buff[j];
		buff[j] = buff[i];
		buff[i] = temp;
		i--;
		j++;
	}
	return (_writestring(buff));
}

/**
 * _writestring - write a string to the stdout followed by newline
 * @str: string to write
 *
 * Return: number of bytes written or -1 on error
 * On error, -1 is returned, and errno is set appropriately.
 */
int _writestring(char *str)
{

	ssize_t bytes_written;

	if (str == NULL)
		return (-1);
	bytes_written = write(STDOUT_FILENO, str, _strlen(str));
	return (bytes_written > 0 ? bytes_written : -1);
}

/**
 * _strlen - returns length of a string
 * @string: input string whose length is needed
 *
 * Return: length of string
 */
int _strlen(char *string)
{
	char *pointer = string;

	if (string == NULL || *string == '\0')
		return (0);
	while (*string != '\0')
		++string;
	return ((string - pointer));
}
