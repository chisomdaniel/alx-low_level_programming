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
	int a = 0;
	char line = '\n';

	while (a < 10)
	{
		printf("%d", a);
		a++;
	}
	putchar(line);

	return (0);
}
