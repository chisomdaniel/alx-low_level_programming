#include <stdlib.h>

/**
 * array_range - create an array of integers
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: a pointer to an int
 */

int *array_range(int min, int max)
{
	int num, i = 0;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	num = (max - min) + 1;

	arr = malloc(sizeof(*arr) * num);
	if (arr == NULL)
	{
		return (NULL);
	}

	do {
		arr[i] = min;
		min++;
		i++;
	} while (min <= max);

	return (arr);
}
