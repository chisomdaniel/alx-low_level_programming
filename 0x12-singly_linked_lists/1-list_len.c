#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - find the number of node in a list
 *
 * @h: the struct pointer
 *
 * Return: the number of node
 */

size_t list_len(const list_t *h)
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
			count += 1;
			hold = hold->next;
			continue;
		}
		count += 1;
		hold = hold->next;
	}

	return (count);
}

