#include <stdio.h>

/**
 * main - print all argument passed
 *
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	while (argc)
	{
		printf("%s\n", *argv++);
		argc--;
	}

	return (0);
}
