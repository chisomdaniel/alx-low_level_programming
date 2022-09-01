#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at an index
 *
 * @h: pointer to the head of the list
 * @idx: the index where the new node should be added
 * @n: the new element
 *
 * Return: pointer to the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nextptr, *new;
	unsigned int index = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;

	nextptr = *h;
	index = 0;
	while (nextptr != NULL)
	{
		if (index == idx)
		{
			new->next = nextptr;
			new->prev = nextptr->prev;
			nextptr->prev->next = new;
			return (new);
		}
		nextptr = nextptr->next;
		index += 1;
	}
	if (idx == 0 && nextptr == NULL)
	{
		add_dnodeint(h, n);
	}

	return (NULL);
}
