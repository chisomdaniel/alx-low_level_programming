#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 *
 * @h: a pointer to the header of the list
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = h;
	dlistint_t *ne;
	int element = 0;

	if (head == NULL)
		return (element);

	element += 1;
	ne = head->next;
	while (ne != NULL)
	{
		element += 1;
		ne = ne->next;
	}
	return (element);
}
