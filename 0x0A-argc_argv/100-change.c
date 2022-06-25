#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 *
 * @argc: argument count
 * @argv: string argument
 *
 * Return: return a number
 */

int main(int argc, char **argv)
{
	int cent[5] = {25, 10, 5, 2, 1};
	int i;
	int money, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	if (money <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i <= 5; i++)
	{
		for (; money - cent[i] >= 0 && money > 0;)
		{
			money -= cent[i];
			count++;
		}
	}
	printf("%d\n", count);

	return (0);
}

