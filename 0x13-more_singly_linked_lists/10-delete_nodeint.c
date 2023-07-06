#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a giving index
 * @head: a pointer to the head of the list
 * @index: the giving index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *toBeDeleted;
	unsigned int position = 0;

	if (!current)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current && position < (index - 1))
	{
		current = current->next;
		position++;
	}

	if (position == (index - 1) && current && current->next)
	{
		toBeDeleted = current->next;
		current->next = (current->next)->next;
		free(toBeDeleted);
		return (1);
	}
	return (-1);
}
