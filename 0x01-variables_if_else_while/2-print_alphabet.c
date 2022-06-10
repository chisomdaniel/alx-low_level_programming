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
	char a = 'a';
	char line = '\n';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar(line);

	return (0);
}
