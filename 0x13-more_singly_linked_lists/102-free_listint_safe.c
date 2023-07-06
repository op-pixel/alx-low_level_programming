#include "lists.h"
/**
 * _realloc - reallocates a memory block using malloc and free
 * @old: a pointer to the old list
 * @s: the size of the new list
 * @node: the new node to be added to the old list
 * Return: A pointer to the new list
 */
listint_t **_realloc(listint_t **old, size_t s, listint_t *node)
{
	listint_t **new;
	size_t i = 0;

	new = malloc(s * sizeof(listint_t *));
	if (!new)
	{
		free(old);
		return (NULL);
	}
	while (i < s - 1)
	{
		new[i] = old[i];
		i++;
	}
	new[i] = node;
	free(old);
	return (new);
}

/**
 *  free_listint_safe - frees a list with loops
 *  @h: a pointer to the list
 *  Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t **UniqueList = NULL;
	size_t nbrNodes = 0, i = 0;
	listint_t *current = *h;

	if (!h)
		return (0);

	while (*h)
	{
		for (i = 0; i < nbrNodes; i++)
		{
			if (*h == UniqueList[i])
			{
				*h = NULL;
				free(UniqueList);
				return (nbrNodes);
			}
		}
		nbrNodes++;
		UniqueList = _realloc(UniqueList, nbrNodes, *h);
		current = current->next;
		free(*h);
		*h = current;
	}
	free(UniqueList);
	return (nbrNodes);
}
