#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 *
 * @format: the list of tpyes of arguments passed
 *
 * Return: nothing
 */


void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	int j, k;
	double g;

	va_list(ap);

	va_start(ap, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i]){
			case 'c':
				k = va_arg(ap, int);
				printf("%c", k);
				break;
			case 'i':
				j = va_arg(ap, int);
				printf("%d", j);
				break;
			case 'f':
				g = va_arg(ap, double);
				printf("%f", g);
				break;
			case 's':
				s = va_arg(ap, char*);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;

		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
		}

		i++;
	}
	printf("\n");

	va_end(ap);
}
