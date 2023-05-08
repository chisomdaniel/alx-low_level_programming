#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in `array`
 * @value: the value to search for
 *
 * Return: the index where value is located,
 * If value is not present in array or if array is NULL,
 * your function must return -1
 *
 * You can assume that `array` will be sorted in ascending order
 * You can assume that `value` won’t appear more than once in array
 */


int binary_search(int *array, size_t size, int value)
{
	int m, n, i;

	m = 0;
	n = size - 1;

	if (array == NULL)
		return (-1);

	while (m <= n)
	{
		print_array(array, m, n);
		i = (m + n) / 2;

		if (array[i] < value)
			m = i + 1;
		else if (array[i] > value)
			n = i - 1;
		else if (array[i] == value)
			return (i);
	}

	return (-1);
}


/**
 * print_array - print an array of int from a
 * start point to an end
 *
 * @arr: the array to print
 * @a: the start point index
 * @b: the end index
 *
 * Return: nothing
 */

void print_array(int *arr, int a, int b)
{
	int j;

	printf("Searching in array: ");

	for (j = a; j <= b; j++)
	{
		printf("%i", arr[j]);
		if (j != b)
			printf(", ");
	}
	printf("\n");
}
