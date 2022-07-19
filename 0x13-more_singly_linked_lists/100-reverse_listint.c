#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *currentptr, *nextptr;

	currentptr = (*head)->next;
	if (currentptr == NULL)
	{
		return (*head);
	}
	nextptr = currentptr->next;
	(*head)->next = NULL;
	while (*head != NULL)
	{
		currentptr->next = *head;
		*head = currentptr;
		currentptr = nextptr;
		if (currentptr == NULL)
		{
			return (*head);
		}
		nextptr = nextptr->next;

	}

	return (*head);  /* Also returns NULL if head is NULL*/
}

