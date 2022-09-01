#include "lists.h"

/**
 * add_dnodeint_end - add a new element to the end of a list
 *
 * @head: a pointer to the head pointer
 * @n: the new element
 *
 * Return: pointer to the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (*head != NULL && tail->next != NULL)
		tail = tail->next;

	new->prev = tail;
	if (*head == NULL)
		*head = new;
	else
		tail->next = new;

	return (new);
}
