#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t list
 * @head: a pointer to the first element of the list
 * @index: index of the node to be returned
 * Return: the nth node, NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (position < index && head)
	{
		position++;
		head = head->next;
	}
	if (position == index)
		return (head);
	return (NULL);
}
