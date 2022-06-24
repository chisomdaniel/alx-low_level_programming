#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 *
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: 0 for success, or 1 f0r error
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		printf("%d\n", a * b);

		return (0);
	}

	printf("Error\n");
	return (1);
}
