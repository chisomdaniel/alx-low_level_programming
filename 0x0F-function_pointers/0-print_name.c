#include <stdlib.h>

/**
 * print_name - print a name
 *
 * @name: the name
 * @f: a function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}
