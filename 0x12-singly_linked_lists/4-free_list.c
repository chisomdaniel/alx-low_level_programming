#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - a functions that frees a list_t list
 *
 * @head: the address to the head of the list
 *
 * Return - nothing
 */

void free_list(list_t *head)
{
	list_t *hold = head;

	if (head == NULL)
	{
		return;
	}

	while (hold != NULL)
	{
		head = head->next;
		free(hold->str);
		free(hold);
		hold = head;
	}
}
