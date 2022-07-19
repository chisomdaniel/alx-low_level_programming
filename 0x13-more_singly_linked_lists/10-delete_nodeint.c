#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at an index of a listint_t linked list
 *
 * @head: pointer to the head of the list
 * @index: the index to be deleted
 *
 * Return: 1 if succeed or -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *hold, *node = *head;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}

	while (node != NULL)
	{
		count += 1;
		if (count == index)  /* stop one node before nth_node */
		{
			hold = node->next;
			node->next = node->next->next; /* node->next->next */
			free(hold);
			return (1);
		}
		node = node->next;
	}

	return (-1);
}
