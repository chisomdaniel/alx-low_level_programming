#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at an index
 *
 * @head: pointer to the head of the list
 * @index: the index of the node to be deleted
 *
 * Return: 1 if it succed or -1 if failed
 */

dlistint_t delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *nextptr;
	unsigned int idx = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	nextptr = *head;
	idx = 0;
	while (nextptr != NULL)
	{
		if (index == idx)
		{
			new->next = nextptr;
			new->prev = nextptr->prev;
			nextptr->prev->next = nextptr->next;
			return (new);
		}
		nextptr = nextptr->next;
		idx += 1;
	}

	return (NULL);
}
