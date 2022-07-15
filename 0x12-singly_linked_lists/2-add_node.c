#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add an element to the first spot of a struct
 *
 * @head: the pointer to the first element
 * @str: the string to store
 *
 * Return: a pointer to the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *addr, *temp;
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		count += 1;
		i++;
	}

	if (str == NULL)
		return (NULL);

	addr = *head;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = count;
	temp->next = addr;
	*head = temp;

	return (*head);
}

