#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: a pointer to the first node
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (0);

	while (current != NULL)
	{
		nbr_nodes++;
		printf("%d\n", current->n);
		current = current->next;
	}
	return (nbr_nodes);
}
