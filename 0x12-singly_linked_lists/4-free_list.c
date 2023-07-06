#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: a pointer to the first element
 */
void free_list(list_t *head)
{
	list_t *current = head;

	if (!head)
		return;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
