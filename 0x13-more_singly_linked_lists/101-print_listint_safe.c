#include "lists.h"

/**
 * _rc - reallocates a memory block using malloc and free
 * @o: a pointer to the old list.
 * @s: the size of the new list (is greater than the old one by 1).
 * @n: new node to add to the old list.
 * Return: A pointer to the new list.
 */
const listint_t **_rc(const listint_t **o, unsigned int s, const listint_t *n)
{
	const listint_t **new;
	unsigned int i = 0;

	new = malloc(s * sizeof(listint_t *));
	if (!new)
	{
		free(o);
		exit(98);
	}
	while (i < s - 1)
	{
		new[i] = o[i];
		i++;
	}
	new[i] = n;
	free(o);
	return (new);
}
