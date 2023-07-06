#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked
 * listint_t list
 *
 * @h: a pointer to the list
 * Return: the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr_nodes = 0;

	while (h)
	{
		nbr_nodes++;
		h = h->next;
	}
	return (nbr_nodes);
}
