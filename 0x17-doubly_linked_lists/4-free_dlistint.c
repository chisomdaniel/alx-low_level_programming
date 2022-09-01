#include "lists.h"

/**
 * free_dlistint - a function to free a double linked list
 *
 * @head: pointer to the head of the list
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
}
