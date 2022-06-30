#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: memory size
 *
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
