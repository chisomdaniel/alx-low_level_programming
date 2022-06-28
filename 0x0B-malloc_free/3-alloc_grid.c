#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function to allocate grid storage
 * 
 * @width: grid width
 * @height: grid height
 * 
 * Return: a pointer to the allocated storage
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	/* Conditions */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* Alocate space for the row or main pointer */
	arr = malloc(sizeof(*arr) * height);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		/* Alocate for the column, or pointer under the main one */
		arr[i] = malloc(sizeof(arr) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
		}
	}

	/* Initiallize each element to '0' */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
