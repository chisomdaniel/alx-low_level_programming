#include "main.h"

/**
 * _isalpha - check for alphabets
 *
 * @c: is an integer
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A'  && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

