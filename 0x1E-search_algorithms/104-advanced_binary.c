#include "search_algos.h"

/**
 * advanced_binary - searches for a value in a sorted array
 * of integers using the binary search algorithm (recursively)
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


int advanced_binary(int *array, size_t size, int value)
{
	int half = size / 2;
	int *new_array;
	size_t new_size;
	int index;

/*	if (size == 1)
		half = 0;*/
	if (array == NULL)
		return (-1);

	if (size % 2 == 0)
		half = size / 2;
	else
		half = (size / 2) + 1;

	printf("Half is: %i, size: %li\n", half, size);
	print_array_2(array, size);
	if (array[half - 1] == value)
		return (half);
	else if (size == 1 || size == 0)
	{
		return (-1);
	}
	else if (array[half] < value)
	{
		new_array = &array[half];
		if (size % 2 != 0)
		{
			new_size = size - half;
		}
		else
		{
			new_size = size - half;
		}
	}
	else if (array[half] > value)
	{
		new_array = array;
		if (size % 2 != 0)
			new_size = size - half;
		else
			new_size = size - half - 1;
	}
	index = advanced_binary(new_array, new_size, value);

	return (index);
}


/**
 * print_array_2 - print an array of int from a
 * start point to an end
 *
 * @arr: the array to print
 * @end: the end index
 *
 * Return: nothing
 */

void print_array_2(int *arr, int end)
{
	int j;

	printf("Searching in array: ");

	for (j = 0; j < end; j++)
	{
		printf("%i", arr[j]);
		if (j != end)
			printf(", ");
	}
	printf("\n");
}
