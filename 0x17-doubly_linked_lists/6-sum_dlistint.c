#include "lists.h"

/**
 * sum_dlistint - sum the elements of the list
 *
 * @head: pointer to the head of the list
 *
 * Return: the sum of the elements
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ne;
	int sum = 0;

	if (head == NULL)
		return (0);

	ne = head;
	while (ne != NULL)
	{
		sum += ne->n;
		ne = ne->next;
	}

	return (sum);
}
