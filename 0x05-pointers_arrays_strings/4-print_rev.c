#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: pointer argument
 *
 */

void print_rev(char *s)
{
	int i;
	char *a;
	char b;
	int count = 0;

	a = s;
	for (i = 0; i < 10000; i++)
	{
		if (a[i] == 0)
		{
			break;
		}
		else
		{
			count++;
		}
	}

	while (count > 0)
	{
		b = a[count - 1];
		_putchar(b);
		count--;
	}

	_putchar('\n');
}
