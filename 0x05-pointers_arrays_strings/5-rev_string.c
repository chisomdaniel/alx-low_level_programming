#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: pointer argument
 *
 */

void rev_string(char *s)
{
	int i;
	char *a;
	char b;
	int count = 0;
	int count2 = 0;

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
		*(a + count2) = b;
		count--;
		count2++;
	}

	_putchar('\n');
}
