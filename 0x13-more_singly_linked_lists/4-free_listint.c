#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 *
 * @head: a pointer to the head of the list
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *list = head;

	if (head == NULL)
	{
		return;
	}

	while (list != NULL)
	{
		head = head->next;
		free(list);
		list = head;
	}
}
