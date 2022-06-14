#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: puts_half argument
 *
 * _strlen - return length of a string
 * @s: strlen argument
 *
 * Return: Always 0 (Success)
 *
 */

int _strlen(char *s)
{
	int i;
	char *a;
	int count = 0;

	a = s;
	for (i = 0; i < 1000; i++)
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
	return (count);
}

void puts_half(char *str)
{
	int length;
	int i;

	char *string = str;
	char b;

	length = _strlen(str);

	if (length % 2 == 0)
	{
		for (i = length / 2; i < length; i++)
		{
			b = string[i];
			_putchar(b);
		}
	}
	else
	{
		for (i = (length - 1) / 2; i < length; i++)
		{
			b = string[i + 1];
			_putchar(b);
		}
	}

}
