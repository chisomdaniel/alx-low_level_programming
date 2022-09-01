#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a linked list
 *
 * @head: pointer to the head pointer
 * @n: the new element
 *
 * Return: the address of the new element of NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || head == NULL)
		return NULL;

	new->n = n;
	new->prev = NULL;
	new->next = h;
	if (h != NULL)
		h->prev = new;
	*head = new;

	return new;
}
