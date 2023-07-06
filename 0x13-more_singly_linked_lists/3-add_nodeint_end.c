#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: a pointer to the head of the list
 * @n: the number to add at the end of the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current = *head;

	new = malloc(sizeof(listint_t *));
	if (!new)
		return (NULL);
	new->n = n;

	/* if the list is not NULL Loop until the last element */
	while (current && current->next)
		current = current->next;
	/* if the lists is NULL, new will be the head of the list */
	if (!current)
		*head = new;
	else
		current->next = new;
	return (new);
}
