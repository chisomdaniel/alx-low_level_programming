#include <stdlib.h>

/**
 * argstostr - a function that concat all the argument passed to it
 *
 * @ac: number of argument passed
 * @av: arguments
 *
 * Return: a pointer to the concated argument
 */

char *argstostr(int ac, char **av)
{
	char *string;
	int i, j, k = 0, count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Allocate storage for string using malloc */
	for (i = 0; i < ac; i++)
	{
		for (j = 0;; j++)
		{
			/* Count all the characters of the individual array */
			if (av[i][j] == '\0')
			{
				count++;
				break;
			}
			count++;
		}
	}

	string = malloc(sizeof(*string) * count + 1);
	if (string == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0;; j++)
		{
			if (av[i][j] == '\0')
			{
				string[k] = '\n';
				k++;
				break;
			}
			string[k] = av[i][j];
			k++;
		}
	}
	return (string);
}

