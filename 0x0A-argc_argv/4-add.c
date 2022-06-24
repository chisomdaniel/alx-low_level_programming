#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply 2 numbers
 *
 * @argc: add positive numbers
 * @argv: arguments passed
 *
 * Return: 0 for success, or 1 f0r error
 */

int main(int argc, char **argv)
{
	int i, a, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
		{
			a = atoi(argv[i]);

			if (a >= 0)
			{
				sum += a;
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
