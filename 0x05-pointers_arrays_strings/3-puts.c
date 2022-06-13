#include "main.h"

/**
 * _puts - returns the length of a string
 *
 * @str: pointer argument
 *
 *
 */

void _puts(char *str)
{
	int i;
	char *a;
	char b;

	a = str;
	for (i = 0; i < 10000; i++)
	{
		if (a[i] == 0)
		{
			break;
		}
		else
		{	b = a[i];
			_putchar(b);
		}
	}
	_putchar('\n');
}
