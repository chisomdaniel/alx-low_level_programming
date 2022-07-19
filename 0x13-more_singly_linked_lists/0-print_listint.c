#include "lists.h"

/**
 * print_listint - a function to print the content of a linked list
 *
 * @h: pointer to the head of the list
 *
 * Return: the length of the linked list
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *head;
	int count = 0;

	head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count += 1;
		head = head->next;
	}


	return (count);
}
