#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function
 *
 * @argc: an int
 * @argv: an array of char
 *
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	int a, b;
	int (*op)(int a, int b);
	int cal;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	cal = op(a, b);
	if (cal == 000)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", cal);

	return (0);
}
