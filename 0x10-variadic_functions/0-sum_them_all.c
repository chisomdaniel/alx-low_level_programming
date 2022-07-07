#include <stdarg.h>

/**
 * sum_them_all - sum all numbers passed
 *
 * @n: the number of arguments passed
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0, j;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	for (j = 0; j < n; j++)
	{
		i += va_arg(ap, int);
	}

	va_end(ap);
	return (i);
}
