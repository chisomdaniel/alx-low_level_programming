#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at given position
 *
 * @head: pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 *       index starts at 0
 * @n: the data to be added
 *
 * Return: the address of the new node or NULL if it failed
 *         if its not possible to add the new node at index idx,
 *         do not add the new node and return NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *nth_node = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (NULL);
	}

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	while (nth_node != NULL)
	{
		count += 1;
		if ((count) == idx)  /* stop one node before nth_node */
		{
			newnode->next = nth_node->next;
			nth_node->next = newnode;
			return (newnode);
		}

		nth_node = nth_node->next;
	}

	return (NULL);
}
