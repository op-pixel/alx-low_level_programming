#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @str: the giving string
 * Return: the length of str
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the heard of the list
 * @str: the string that should be duplicate in the new element
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t *));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
