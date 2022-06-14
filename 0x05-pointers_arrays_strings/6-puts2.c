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
	int count = 0;

	for (i = 0; i < 100000; i = i + 2)
	{
		if (a[i] == 0 || count == 223)
		{
			break;
		}
		else
		{
			b = a[i];
			_putchar(b);
			count++;
		}
	}
	_putchar('\n');
}
