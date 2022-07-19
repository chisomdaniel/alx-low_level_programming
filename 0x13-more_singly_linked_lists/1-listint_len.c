#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 *
 * @h: a pointer to the head of the list
 *
 * Return: the length of the list
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *head = h;
	int count = 0;

	while (head != NULL)
	{
		count += 1;
		head = head->next;
	}

	return (count);
}
