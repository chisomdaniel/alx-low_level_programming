#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - print an array
 *
 * @array: the array
 * @size: the size of the array
 * @action: a function pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size--)
	{
		(*action)(array[i]);
		i++;
	}
}
