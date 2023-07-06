#include "lists.h"

/**
 * sum_listint - returns the sum of all the data of a listint_t list
 * @head: a pointer to the first element of the list
 * Return: the sum of all the data of the list, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{

		sum += head->n;
		head = head->next;
	}
	return (sum);
}
