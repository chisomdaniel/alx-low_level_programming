#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a = 48;
	int space = 32;
	int comma = 44;

	while (a <= 57)
	{
		putchar(a);
		if (a != 57)
		{
			putchar(comma);
			putchar(space);
		}
		a++;
	}
	putchar('\n');

	return (0);
}
