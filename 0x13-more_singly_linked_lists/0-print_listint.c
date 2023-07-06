#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nbr_nodes++;
		h = h->next;
	}
	return (nbr_nodes);
}
