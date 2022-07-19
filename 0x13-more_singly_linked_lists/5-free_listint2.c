#include "lists.h"

/**
 * free_listint2 - free a linked list and set the head to NULL
 *
 * @head: pointer to the head of the list
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *list = *head, *headptr = *head;

	if (headptr == NULL)
	{
		return;
	}

	while (list != NULL)
	{
		headptr = headptr->next;
		free(list);
		list = headptr;
	}
	*head = NULL;
}
