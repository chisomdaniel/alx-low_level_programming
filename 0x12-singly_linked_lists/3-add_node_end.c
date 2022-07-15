#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add new data to the end of a linked list
 *
 * @head: the pointer to the first element/data
 * @str: the string to add
 *
 * Return: a pointer to the new elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *last;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	last = *head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = temp;

	return (temp);
}

