#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 *
 * @head: a link to th head of the list
 * @n: the new data
 *
 * Return: the address of the new element
 *         or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hold, *headptr = *head;

	hold = malloc(sizeof(listint_t));
	if (hold == NULL)
	{
		return (NULL);
	}

	hold->n = n;
	hold->next = headptr;
	*head = hold;

	return (hold);
}
