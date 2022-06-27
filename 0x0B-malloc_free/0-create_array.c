#include <stdlib.h>

/**
 * create_array - a function to create an array of char
 *
 * @size: size of the array
 * @c: character to fill in the array
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}

	return (ar);
}
