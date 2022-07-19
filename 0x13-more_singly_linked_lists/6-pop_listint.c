#include "lists.h"

/**
 * pop_listint - delete the head node
 *
 * @head: pointer to the head of the list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *hold = (*head)->next;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	free(*head);
	*head = hold;

	return (n);
}
