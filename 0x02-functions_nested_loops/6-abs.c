#include "main.h"

/**
 * _abs - print the absolute value of a number
 *
 * @n: is an integer
 *
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}

