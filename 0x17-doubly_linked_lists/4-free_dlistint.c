#include "lists.h"

/**
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextptr;

	if (head == NULL)
		return;

	nextptr = head;
	while (nextptr != NULL)
	{
		nextptr = nextptr->next;
		free(head);
		head = nextptr;
	}
	return;
}
