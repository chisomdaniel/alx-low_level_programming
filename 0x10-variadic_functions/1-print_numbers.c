#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers
 *
 * @separator: the string to be printed between nums
 * @n: the number of ints passed
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, a;

	if (n <= 0)
	{
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(ap, int);
		if (separator != NULL || "")
		{
			printf("%d%s", a, separator);
		}
		else
		{
			printf("%d", a);
		}
	}
	printf("\n");

	va_end(ap);
}
