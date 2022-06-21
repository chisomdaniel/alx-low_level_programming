#include "main.h"

/**
 * print_chessboard - main function
 *
 * @a: first argument
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	char hold;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			hold = a[i][j];
			_putchar(hold);
		}
		_putchar('\n');
	}
}

