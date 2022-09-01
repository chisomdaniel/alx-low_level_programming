#include "lists.h"

/**
 * print_dlistint - a function to print the elements of a linked list
 *
 * @h: a pointer to the header of the list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head = h;
	dlistint_t *ne;
	int element = 0;

	if (head == NULL)
		return element;

	printf("%d\n", head->n);
	element += 1;
	ne = head->next;
	while (ne != NULL)
	{
		printf("%d\n", ne->n);
		element += 1;
		ne = ne->next;
	}

	return element;
}
