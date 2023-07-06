#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: a pointer to the head of the list
 * Return: the head node’s data if it is not empty, 0 otherwize
 */
int pop_listint(listint_t **head)
{
	listint_t *toBeDeleted = *head;
	int nodeVal = 0;

	if (*head)
	{
		*head = (*head)->next;
		nodeVal = toBeDeleted->n;
		free(toBeDeleted);
	}
	return (nodeVal);
}
