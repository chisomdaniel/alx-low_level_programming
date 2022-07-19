#include "lists.h"

/**
 * sum_listint - return the sum of all the data (n) of a linked list
 *
 * @head: pointer to teh head of the list
 *
 * Return: the sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);   /* if list is empty, this also returns 0 */
}
