#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: first variable
 *
 * Return: Always 0 (Success)
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
