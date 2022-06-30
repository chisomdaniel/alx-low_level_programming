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
	if (malloc(b) == NULL)
	{
		exit(98);
	}

	return (malloc(b));
}
