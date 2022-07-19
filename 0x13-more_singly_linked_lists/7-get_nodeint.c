#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: an address to the head of the list
 * @index: the index of the node starting at 0
 *
 * Return: the nth node, or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		count++;
		if ((count - 1) == index)
		{
			return (head);
		}
		head = head->next;
	}

	return (NULL);
}
