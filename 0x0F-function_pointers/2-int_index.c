#include <stdlib.h>

/**
 * int_index - search for a string
 *
 * @array: the int array
 * @size: the size of the array
 * @cmp: a function pointer
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	while (size--)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
