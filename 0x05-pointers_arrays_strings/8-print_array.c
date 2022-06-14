#include <stdio.h>

/**
 * print_array - print n elements of an array
 *
 * @a: pointer argument
 * @n: second function argument
 *
 */

void print_array(int *a, int n)
{
	int b;
	int i;

	for (i = 0; i <= n; i++)
	{
		b = a[i];
		if (i == n - 1)
		{
			printf("%d", b);
			break;
		}
		printf("%d, ", b);
	}
}
