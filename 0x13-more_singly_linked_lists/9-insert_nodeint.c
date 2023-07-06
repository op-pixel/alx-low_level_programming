#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the head of the list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: the data of the new element
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current = *head;
	unsigned int position = 0;

	new = malloc(sizeof(listint_t *));
	if (!new)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (current && position < idx - 1)
	{
		current = current->next;
		position++;
	}
	if (position == idx - 1)
	{
		new->next = current->next;
		current->next = new;
		return (new);
	}
	return (NULL);



}
