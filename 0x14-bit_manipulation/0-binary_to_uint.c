#include "main.h"

/**
 * binary_to_uint - gagagha
 */
unsigned int binary_to_uint(const char *b)
{
	bity_t *head = get_bits(b), *ptr;
	unsigned int total;

	if (head == NULL)
		return (0);
	for (ptr = head; ptr != NULL; ptr = ptr->next)
	{
		if (ptr->ch == '1')
			total += ptr->index;
	}
	return (total);
}

/**
 * add_nodeint - add node at the begining of list
 * @head: pointer to the pointer to the head of list
 * @n: n property for the new node
 *
 * Return: pointer to new node
 */
bity_t *add_node(bity_t *head, int index, char ch)
{
	bity_t *ptr = malloc(sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);
	ptr->ch = ch;
	ptr->index = index;
	ptr->next = head;
	head = ptr;
	return (ptr);
}

/**
 * converts an integer to a binary string
 */
int *get_bits(char *chars)
{
	int i, len = _strlen(chars); /* counter */
	char ch;

	bity_t *head = NULL;
	for (i = 0; i < len; i++)
	{
		ch = chars[i];
		if (ch != '0' && ch != '1')
			return (0);
		head = add_node(head, i, ch);
	}
	return (head);
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

/**
 * converts an integer to a binary string
 */
int *count_bits(int num)
{
	int i; /* counter */
	/* int *box = malloc(sizeof(*box) * 100); */

	for (i = 0; num != 0; num >>= 1, i++)
	{
		/* box[i] = num & 1; */
		printf("%d", num & 1);
		putchar(0 & 1);
	}
	/* box[i++] = '\n'; */
	return (NULL);
}
