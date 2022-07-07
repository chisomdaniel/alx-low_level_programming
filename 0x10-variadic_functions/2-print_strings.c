#include <stdarg.h>
#include <stdio.h>

/**
 * print_string - print strings
 *
 * @separator: the string separator
 * @n: the number of arguments passed
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *str;
	int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (separator != NULL)
		{
			if (str == NULL)
			{
				printf("(nil)");
				continue;
			}
			printf("%s%s", str, separator);
		}
		else
		{
			if (str == NULL)
			{
				printf("(nil)");
				continue;
			}
			printf("%s", str, separator);
		}
	}
	printf("\n");


	va_end(ap);
}
