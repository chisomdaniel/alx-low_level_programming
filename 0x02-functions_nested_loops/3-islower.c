#include "main.h"

/**
 * _islower(int c) - check for lower case characters
 *
 * int c - is an integer
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

