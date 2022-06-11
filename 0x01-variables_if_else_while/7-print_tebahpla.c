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
	char a = 'z';
	char line = '\n';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar(line);

	return (0);
}
