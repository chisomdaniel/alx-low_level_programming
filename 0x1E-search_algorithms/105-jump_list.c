#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted linked list
 * of integers using the jump search algorithm
 *
 * @list: is a pointer to the head of the `list` to search in
 * @size: is the number of nodes in `list`
 * @value: is the `value` to search for
 *
 * Return: a pointer to the first node where `value` is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */


listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, prev;

	if (list == NULL)
		return (NULL);

	prev = 0;
	jump = (int)sqrt(size);

	while (search(list, jump)->n < value && jump < size)
	{
		printf("Value checked index [%li] = [%i]\n", jump, search(list, jump)->n);
		prev = jump;
		jump = jump + (int)sqrt(size);

		if (jump >= size)
		{
			jump = size - 1;
			break;
		}
		if (prev >= size)
			return (NULL);
	}
	printf("Value checked index [%li] = [%i]\n", jump, search(list, jump)->n);

	printf("Value found between indexes [%li] and [%li]\n", prev, jump);
	while (prev <= jump && prev < size)
	{
		printf("Value checked index [%li] = [%i]\n", prev, search(list, prev)->n);
		if (search(list, prev)->n == value)
			return (search(list, prev));
		else if (search(list, prev)->n > value)
			return (NULL);

		prev++;
	}
	return (NULL);
}


/**
 * search - get a node a a particular index in a list
 *
 * @head: the head of the list pointer
 * @index: the index to find
 *
 * Return: a pointer to the node
 */

listint_t *search(listint_t *head, size_t index)
{
	size_t i;
	listint_t *list;

	list = head;
	for (i = 0; i < index; i++)
	{
		list = list->next;
	}

	return (list);
}
