
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list & set head to NULL
 * @head: a pointer to the list
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
		return;

	while (*head)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
