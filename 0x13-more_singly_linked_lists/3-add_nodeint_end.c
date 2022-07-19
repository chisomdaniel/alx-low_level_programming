#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a list
 *
 * @head: pointer to the head of the list
 * @n: the new data
 *
 * Return: the pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *hold, *firstnode = *head, *lastnode;

	hold = malloc(sizeof(listint_t));
	if (hold == NULL)
	{
		return (NULL);
	}
	hold->n = n;
	hold->next = NULL;

	if (firstnode == NULL)
	{
		*head = hold;
		return (*head);
	}

	lastnode = firstnode;
	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = hold;

	return (hold);
}
