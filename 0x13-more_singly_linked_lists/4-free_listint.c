#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *current = head;

	if (!head)
		return;

	while (current)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
