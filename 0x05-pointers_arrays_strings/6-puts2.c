#include "main.h"

/**
 * puts2 - main function
 *
 * @str: - function argument
 *
 */

void puts2(char *str)
{
	char *a = str;
	char b;
	int i;

	for (i = 0; i < 100000; i++)
	{
		if (a[i] == 0)
		{
			break;
		}
		else
		{
			b = a[i];
			_putchar(b);
			i++;
		}
	}
	_putchar('\n');
}
