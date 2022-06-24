#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 *
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", --argc);

	return (0);
}
