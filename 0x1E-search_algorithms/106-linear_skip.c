#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted linked list
 * of integers using the jump search algorithm
 *
 * @list: is a pointer to the head of the `list` to search in
 * @value: is the `value` to search for
 *
 * Return: a pointer to the first node where `value` is located
 * If value is not present in array or if array is NULL,
 * your function must return NULL
 */


skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *jump, *prev;

	if (list == NULL)
		return (NULL);

	prev = list;
	jump = list->express;

	while (jump->n < value && jump->express != NULL)
	{
		printf("Value checked at index [%li] = [%i]\n", jump->index, jump->n);
		prev = jump;
		jump = jump->express;

	}
	printf("Value checked at index [%li] = [%i]\n", jump->index, jump->n);

	printf("Value found between indexes [%li] and [%li]\n", prev->index,
			jump->index);
	while (prev != jump->next)
	{
		printf("Value checked at index [%li] = [%i]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		else if (prev->n > value)
			return (NULL);

		prev = prev->next;
	}
	return (NULL);
}
