#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - print the items in a linked list
 *
 * @h: the struct pointer
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	list_t const *hold;

	if (h == NULL)
	{
		return (0);
	}

	hold = h;
	while (hold != NULL)
	{
		if (hold->str == NULL)
		{
			printf("[0] (nil)\n");
			count += 1;
			hold = hold->next;
			continue;
		}
		count += 1;
		printf("[%d] %s\n", hold->len, hold->str);
		hold = hold->next;
	}

	return (count);
}


