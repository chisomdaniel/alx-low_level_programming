#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the jump search algorithm
 *
 * @array: is a pointer to the first element of the `array` to search in
 * @size: is the number of elements in `array`
 * @value: is the `value` to search for
 *
 * Return: the index where the value is
 * If value is not present in array or if array is NULL,
 * your function must return -1
 */


int jump_search(int *array, size_t size, int value)
{
	size_t jump_step, prev;

	if (array == NULL)
		return (-1);

	prev = 0;
	jump_step = (int)sqrt(size);

	while (array[jump_step] < value && jump_step < size)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		prev = jump_step;
		jump_step = jump_step + (int)sqrt(size);

		if (prev >= size)
			return (-1);
	}
	printf("Value checked array[%li] = [%i]\n", prev, array[prev]);

	printf("Value found between indexes [%li] and [%li]\n", prev, jump_step);
	while (prev <= jump_step && prev < size)
	{
		printf("Value checked array[%li] = [%i]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		else if (array[prev] > value)
			return (-1);

		prev++;
	}
	return (-1);
}
