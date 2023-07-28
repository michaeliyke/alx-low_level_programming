#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: current head of list
 * @str: str data for new node
 *
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(*node));
	list_t *prev;

	if (node == NULL)
		return (NULL);

	node->next = NULL;
	node->str = strdup(str);
	node->len = _strlen(node->str);
	if (*head == NULL)
		*head = node;
	else
	{
		prev = *head;
		while (1)
		{
			if (prev->next == NULL)
			{
				prev->next = node;
				break;
			}
			prev = prev->next;
		}
	}
	return (node);
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
