#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */


void print_alphabet(void)
{
	char a = 'a';
	if (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

