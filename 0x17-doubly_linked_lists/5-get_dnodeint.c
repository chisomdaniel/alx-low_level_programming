#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a lined list
 *
 * @head: pointer to the head of the list
 * @index: the index of the node starting from 0
 *
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ne;
	unsigned int idx = 0;

	if (head == NULL)
		return (NULL);

	ne = head;
	idx = 0;
	while (ne != NULL)
	{
		if (idx == index)
		{
			return ne;
		}
		ne = ne->next;
		idx += 1;
	}

	return (NULL);
}
