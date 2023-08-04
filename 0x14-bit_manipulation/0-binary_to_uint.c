#include "main.h"

/**
 * binary_to_uint - entry handler for binary to unsigned int conversion
 * @b: binary string which is to be converted to unsigned int
 *
 * Return: returns the resulting unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	char *cpy = malloc(sizeof(*cpy) * _strlen((char *)b));
	bity_t *head, *ptr;
	unsigned int total = 0;
	char *_;
	(void)_;

	_ = _strcpy(cpy, (char *)b);
	_strrev(cpy);
	head = get_bits(cpy);
	if (head == NULL)
		return (0);
	/* list_bity(head); */
	for (ptr = head; ptr != NULL; ptr = ptr->next)
	{
		if (ptr->ch == '1')
			total += ptr->index;
	}
	return (total);
}

/**
 * add_node - add node at the begining of list
 * @head: pointer to the pointer to the head of list
 * @index: index property for the new node
 * @ch: ch property for the new node
 *
 * Return: pointer to new bity node
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
 * get_bits - builds the the bity linked list with binary string
 * @chars: the binary string which is to be converted to to unsigned decimal
 *
 * Return: returns a bity linked list
 */
bity_t *get_bits(char *chars)
{
	int i, j, len = _strlen(chars); /* counter */
	char ch;
	bity_t *head = NULL;

	for (i = 0, j = 1; i < len; i++, j <<= 1)
	{
		ch = chars[i];
		if (ch != '0' && ch != '1')
			return (0);
		head = add_node(head, j, ch);
	}
	return (head);
}
