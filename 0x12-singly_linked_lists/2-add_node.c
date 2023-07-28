#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer of the head of a linked list
 * @str: pointer to the str of new element
 *
 * Return:  address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *element = malloc(sizeof(*element));

	if (element == NULL)
		return (NULL);
	element->next = *head;
	element->str = strdup(str);
	element->len = _strlen(element->str);
	*head = element;
	return (element);
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
