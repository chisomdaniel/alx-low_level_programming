#include "main.h"

/**
 * print_alphabet_x10 - print the letter a to z 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int count = 1;

	while (count <= 10)
	{
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		count++;
		a = 'a';
	}
}

